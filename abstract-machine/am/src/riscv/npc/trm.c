#include <am.h>
#include <klib-macros.h>
#include <stdio.h>
extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
//int istrap;
#define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))
Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;
//#define set_npctrap(code) if(code) istrap = 1;else istrap = 0;
void putch(char ch) {
}

void halt(int code) {
  //printf("this is halt's code%d\n",code);
  //set_npctrap(code);
  //npc_trap(code);
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
