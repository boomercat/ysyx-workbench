#include <common.h>
#include <memory/paddr.h>
#include <memory/vaddr.h>
#include <getopt.h>
#include <debug.h>


void init_mem();
void init_sdb();
void sdb_set_batch_model();
void restart();
char *img_file = NULL;
static char *log_file = NULL;
static char *diff_so_file = NULL;
static int difftest_port = 1234;



static const uint32_t img [] = {
  0x00000413,  // auipc t0,0
  0xffc10113,  // sd  zero,16(t0)
  0xff010113,  // ld  a0,16(t0)
  0x00100513,
  0x2f0b8b93,
  //0x00100073,  // ebreak (used as nemu_trap)
  //0xdeadbeef,  // some data
};
/*
static const uint32_t img [] = {
 	//0b00000000110000000000001011101111, //jal   x5 12         0x80000000
  //0b00000000000000001000000001100111,
  0b00000000000000000000010100010011,
	//0b00000000000000000001001000110111, //lui   x4 1          0x80000004
	0b00000000000000000000001010010111, //auipc x3 1          0x80000008
	0b00000000010100000000000010010011, //addi  x1 x0 5       0x8000000c
	0b00000000010100000000000010010011, //addi  x1 x0 5       0x80000010
	0b00000000000100000000000100010011, //addi  x2 x0 1       0x80000014
	0b00000000001000000000000100010011, //addi  x2 x0 2       0x80000018
	0b00000000000001010000010100010011, //addi x10 x10 0      0x8000001c mv a0,a0;  
  0b00000000000100000000000001110011   
};*/


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


  welcome();
}