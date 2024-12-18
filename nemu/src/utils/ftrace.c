#include <stdio.h>
#include <stdlib.h>
#include <common.h>
#include <elf.h>

typedef struct{
    char name[64];
    paddr_t addr;
    Elf32_Xword size;
}Symbol;

Symbol *symbol = NULL;
int func_num = 0;
void parse_elf(const char *elf_file){

    FILE *fp;
    fp = fopen(elf_file,"rb"); //read binary
    if(fp == NULL)
        {
            printf("failed to open the elf file!\n");
            exit(0);
        }
    Elf32_Ehdr edhr;
    /*ELF Header:
    Magic:   7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00 
    Class:                             ELF32
        .
        .
        .
    Size of section headers:           40 (bytes)
    Number of section headers:         10
    Section header string table index: 9
*/
    if(fread(&edhr, sizeof(Elf32_Ehdr), 1, fp) <= 0)//fp读1个sizeof(Elf32 header)大小，然后写入edhr中（edhr = ELF header)
    {
        printf("fail to read the elf_head!\n");
        exit(0);
    }    //printf("elf_head test \n%s",fp);
    //修改fp指针在SEKK_SET的e_shoff处
    fseek(fp,edhr.e_shoff,SEEK_SET);//e_shoff 为header table的offset，SEEK_SET 0:文件开头
/*Section Headers:
  [Nr] Name              Type            Addr     Off    Size   ES Flg Lk Inf Al
  [ 0]                   NULL            00000000 000000 000000 00      0   0  0
  [ 1] .text             PROGBITS        80000000 001000 000128 00  AX  0   0  4
  [ 2] .srodata.mainargs PROGBITS        80000128 001128 000001 00   A  0   0  4
  [ 3] .data.ans         PROGBITS        8000012c 00112c 000100 00  WA  0   0  4
  [ 4] .data.test_data   PROGBITS        8000022c 00122c 000020 00  WA  0   0  4
  [ 5] .comment          PROGBITS        00000000 00124c 00002b 01  MS  0   0  1
  [ 6] .riscv.attributes RISCV_ATTRIBUTE 00000000 001277 00001f 00      0   0  1
  [ 7] .symtab           SYMTAB          00000000 001298 000230 10      8  16  4
  [ 8] .strtab           STRTAB          00000000 0014c8 0000a6 00      0   0  1
  [ 9] .shstrtab         STRTAB          00000000 00156e 000068 00      0   0  1
*/
    Elf32_Shdr shdr;
    char *string_table  = NULL;
    //寻找字符串表
    for (int i = 0; i < edhr.e_shnum; i++)
    {

        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)//之前利用fseek修改fp指针后开始把section header写入shdr中
        {
            printf("fail to read the shdr\n");
            exit(0);
        }
        if(shdr.sh_type == SHT_STRTAB)        //读取type =STRTAB的字符串表
        /*  [ 8] .strtab           STRTAB          00000000 0014c8 0000a6 00      0   0  1
            [ 9] .shstrtab         STRTAB          00000000 00156e 000068 00      0   0  1*/
        {
            string_table = malloc(shdr.sh_size);
            fseek(fp,shdr.sh_offset,SEEK_SET);  //修改fp指针在SEEK_SET的sh_offset处
            if(fread(string_table,shdr.sh_size,1,fp) <=0 ){
                printf("fail to read the shrd");
            };//从fp位置读，读section size，存入string_table中
        }
    }
    //寻找符号表
    fseek(fp,edhr.e_shoff,SEEK_SET); //回到elf开头的e_shoff处
    //开始遍历寻找符号表
    for (int i = 0; i < edhr.e_shnum; i++)
    {
        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)
        {
            printf("fail to read the shdr\n");
            exit(0);
        }
        if(shdr.sh_type == SHT_SYMTAB)
        {
            fseek(fp,shdr.sh_offset,SEEK_SET);//修改fp指针到symbol_table处准备写入
            Elf32_Sym sym; //symbol类
            size_t sym_count = shdr.sh_size / shdr.sh_entsize ;

            symbol = malloc(sizeof(Symbol) * sym_count);

            for (int  j = 0; j < sym_count; j++)
            {
                if(fread(&sym, sizeof(Elf32_Sym), 1, fp) <= 0)
                {
                    printf("fail to read the symtab\n");
                    exit(0);
                }
               if(ELF32_ST_TYPE(sym.st_info)==STT_FUNC)
                {
                    const char *name = string_table + sym.st_name;
                    strncpy(symbol[func_num].name,name,sizeof(symbol[func_num].name) - 1);
                    symbol[func_num].addr = sym.st_value; //value赋值给addr
                    symbol[func_num].size = sym.st_size;
                    func_num++;

                }
            }
            
        }

    }
    fclose(fp);
    free(string_table);

}
/*
int rec_depth = 1;
void display_call_func(word_t pc,word_t func_addr){
    int i = 0;
    for(;i<func_num;i++){
        if(func_addr >= symbol[i].addr && func_addr <(symbol[i].addr + symbol[i].size)){break;}
    }
    printf("0x%08x:",pc);
    for (int k = 0; i < rec_depth; k++) printf(" ");
    
    rec_depth++;
    
    printf("call [%s@0x%08x]\n",symbol[i].name,func_addr);
    
}

void display_ret_func(word_t pc){

    int i = 0;
    for(;i<func_num;i++){
        if(pc >= symbol[i].addr && pc <(symbol[i].addr + symbol[i].size)){break;}
    
    }
    printf("0x%08x:",pc);

    rec_depth--;
    for (int  k = 0; i < rec_depth; k++) {printf(" ");}
    printf("ret [%s]\n",symbol[i].name);
}*/
int rec_depth = 1;
void display_call_func(word_t pc, word_t func_addr)
{
    int i = 0;
    for(; i < func_num; i++)
    {
        if(func_addr >= symbol[i].addr && func_addr < (symbol[i].addr + symbol[i].size))
        {
            break;
        }
    }
    printf("0x%08x:", pc);

    for(int k = 0; k < rec_depth; k++) printf("  ");

    rec_depth++;

    printf("call  [%s@0x%08x]\n", symbol[i].name, func_addr);
}

void display_ret_func(word_t pc)
{
    int i = 0;
    for(; i < func_num; i++)
    {
        if(pc >= symbol[i].addr && pc < (symbol[i].addr + symbol[i].size))
        {
            break;
        }
    }
    printf("0x%08x:", pc);

    rec_depth--;

    for(int k = 0; k < rec_depth; k++) printf("  ");

    printf("ret  [%s]\n", symbol[i].name);
}
