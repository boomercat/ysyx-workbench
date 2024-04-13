#include <common.h>
#include <elf.h>
#include <device/map.h>

#define MAX_INST 16
typedef struct {
    word_t pc;
    uint32_t inst;
}Itrace_str;

Itrace_str iringbuf[MAX_INST];

int p_curr = 0;
bool full = false;

void trace_inst(word_t pc, uint32_t inst){
    iringbuf[p_curr].pc = pc;
    iringbuf[p_curr].inst = inst;
    p_curr = (p_curr + 1) % MAX_INST;
}

void display_inst(){
    void disassemble(char *str,int size,uint64_t pc,uint8_t *code, int nbyte);
    int end = p_curr;
    int i = p_curr;
    char buf[128];
    char *p;
    do{
        p = buf;
        p += sprintf(buf, "%s" FMT_WORD ":  %08x\t",
         (i + 1) % MAX_INST == end ? "-->" : "   ", 
        iringbuf[i].pc, iringbuf[i].inst); 
        
        disassemble(p,buf+sizeof(buf)-p,iringbuf[i].pc,(uint8_t *)&iringbuf[i].inst,4);

        puts(buf);
        i = (i + 1) % MAX_INST;
    } while(i != end);
    
    
    }


void print_addread(paddr_t addr, int len){
    printf("read  at " FMT_PADDR "len=%d\n",addr,len);
}


void print_addwrite(paddr_t addr, int len,word_t data){
    printf("write at " FMT_PADDR" len=%d,data=" FMT_WORD "\n",addr,len,data);
}