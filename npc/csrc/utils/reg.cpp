#include <reg.h>
#include <cpu.h>

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void isa_reg_display() {
  int reg_num = ARRLEN(regs);
  int i; 
  for (i = 0; i < reg_num; i++) {
    printf("%-8s%-#20x%-20u\n", regs[i], n_cpu.gpr[i], n_cpu.gpr[i]);
  }
}
word_t isa_reg_str2val(const char *s, bool *success) {
  s = s+1;
  int rg_num  = ARRLEN(regs);
  int k;
  
  for ( k = 0; k < rg_num ; k++)
  {
    if(strcmp("pc",s) == 0){
      return n_cpu.pc;
    }
    if (strcmp(regs[k], s) == 0){
      *success = true;
      return n_cpu.gpr[k];
    }
  }
  *success = false;
  return 0;
}

