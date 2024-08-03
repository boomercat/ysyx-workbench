#include <common.h>
#include <memory/paddr.h>
#include <memory/vaddr.h>
#include <getopt.h>
#include <debug.h>
#include <utils.h>


void init_mem();
void init_sdb();
void sdb_set_batch_model();
void restart();
extern "C" void init_disasm(const char *triple);

char *img_file = NULL;
static char *log_file;
static char *diff_so_file; 
static int difftest_port = 1234;

void init_difftest(char *ref_so_file, long img_size, int port);

// static const uint32_t img [] = {
//   0x00000413,  // auipc t0,0
//   0xffc10113,  // sd  zero,16(t0)
//   0xff010113,  // ld  a0,16(t0)
//   0x00000513,
//   //0x00008067,
//   0x2f0b8b93,
//   0x00100073  // ebreak (used as nemu_trap)
//   //0xdeadbeef,  // some data
// };

// static const uint32_t img[] = {
//     0b00000011110000001011011110010011, // sltiu 
//     0b10000000000000000000000100110111, // lui x2 0x80000
//     0b00000000100000010000000100010011, // addi x2 x2 0x8
//     // 添加sb指令: 存储一个字节到内存地址0x80000008
//     // 0b00000000000100010000001000100011, // sb x1, 0(x2)
//     // 添加sh指令: 存储一个半字到内存地址0x800000
//     // 0b00000000001000010001001000100011, // sh x2, 2(x2)
//     // 添加sw指令: 存储一个字到内存地址0x8000000C
//     // 0b00000000001100010010001000100011, // sw x3, 4(x2) 把sp的内容0x80000008再+offset，作为地址，然后把gp[31:0]写到这个内存中
//     0b00000000000000010010001110000011, // lh
//     //0b00000000000001010000010100010011, // addi x10 x10 0      0x8000001c mv a0,a0
//     0b00000000010100010001000010010011, // slli x1, x0, 0x1
//     0b00000000010100010101000010010011, // slli x1, x0, 0x1
//     0b01000000000100010101000110010011, // srai x1, x0, 0x1
//     0b00000001001100000000011000010011,
//     0b00000000000100000000000001110011  // EBREAK
// };
static const uint32_t img[] = {
0b00000000000000000000000010010111, // auipc
0b00000001110000000000111111101111, //jal
0b10000000000000000000000100110111, // lui x2, 0x80000 (x2 = 0x80000000)
0b00000000100000001000000100010011, // addi x2, x2, 0x8 (x2 = 0x80000008)
0b00000000000000000000000010110011, // add x1, x0, x0 (x1 = 0)
0b00000000000000000000100110110011, // add x3, x0, x1 (x3 = 0)
0b00000000000000000001000110110011, // add x4, x0, x2 (x4 = 0x80000008)

// 初始化x12为非零值
0b00000000000000000000110010110011, // add x12, x0, x1 (x12 = 0)
0b00000000010100000000001110010011, // addi x12, x0, 5 (x12 = 5)

// 新增测试指令
0b00000000101000001010000010010011, // slti x5, x3, 10 (x5 = 1, 因为0 < 10)
0b10000000000000101011000110010011, // sltiu x6, x4, 0x80000000 (x6 = 1, 因为0x80000008 < 0x80000000)
0b00000000011100000010100000110011, // slt reg7 < 0 写到16
// 0b00000000010000010000001011100111, //jalr
0b00000000011100000011011110110011, // sltu reg7和0比，写到15
0B01000000001100111000110000110011, // SUB REG7-REG3 rd20+
0b00000000000000000000000010110011, // add x1, x0, x0 (x1 = 0)

// 测试BEQ指令
0b00000001000001111111010001100011, // BEQ x15, x16, offset 7 (跳转到 0x8000004c)

0b00000000000100001010001010010011, // xori x10, x1, 1 (x10 = x1 ^ 1)
0b00000000000101111011101010110011, // andi x11, x7, 1 (x11 = x7 & 1)
0b00000000000111001100001100110011,  // ori x12, x24, 1 (x12 = x24 | 1)

0b00000001000011000001110010110011, //sll reg 24 << reg 16 rd=25
0b00000001000011000001110010010011,  //slli reg 16
// 结束
0b00000000000100000000000001110011  // EBREAK

};








static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_model(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

static long load_img() {
  if (img_file == NULL) {
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


static void welcome() {
  printf("-------------------------------------\n");
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf(ANSI_FMT("Welcome to RISCV32-NPC!\n", ANSI_FG_YELLOW));
  printf("For help, type \"help\"\n");
}

void init_monitor(int argc, char *argv[]){
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  init_mem();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  restart();
  init_sdb();
  //init_disasm( "riscv32" "-pc-linux-gnu" );
  IFDEF(CONFIG_ITRACE,init_disasm("riscv32-pc-linux-gnu"));
  IFDEF(CONFIG_DIFF_NEMU,init_difftest(diff_so_file,img_size,difftest_port));
  
  welcome();
}