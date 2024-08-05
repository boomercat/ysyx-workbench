#include <reg.h>
#include <cpu.h>
#include <Vtop.h>
#include <Vtop___024root.h>
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
    printf("%-8s%-#20x%-20u\n", regs[i], npc_cpu.gpr[i], npc_cpu.gpr[i]);
  }
  // printf("%-8s%-#20x%-20u\n", "mstatus", npc_cpu.mstatus, npc_cpu.mstatus);
  // printf("%-8s%-#20x%-20u\n", "mtvec", npc_cpu.mtvec, npc_cpu.mtvec);
  // printf("%-8s%-#20x%-20u\n", "mcause", npc_cpu.mcause, npc_cpu.mcause);
  // printf("%-8s%-#20x%-20u\n", "mepc", npc_cpu.mepc, npc_cpu.mepc);
}

void npc_reg_update(){
  for (int j = 0; j < ARRLEN(regs); j++)
  {
     npc_cpu.gpr[j] = top->rootp->top__DOT__register__DOT__regs_ext__DOT__Memory[j];      
  }
    npc_cpu.mstatus = top->rootp->top__DOT__csr__DOT__csr_reg_0; 
    npc_cpu.mtvec = top->rootp->top__DOT__csr__DOT__csr_reg_1;
    npc_cpu.mcause = top->rootp->top__DOT__csr__DOT__csr_reg_2;
    npc_cpu.mepc = top->rootp->top__DOT__csr__DOT__csr_reg_3;

}


word_t isa_reg_str2val(const char *s, bool *success) {
  s = s+1;
  int rg_num  = ARRLEN(regs);
  int k;
  
  for ( k = 0; k < rg_num ; k++)
  {
    if(strcmp("pc",s) == 0){
      return npc_cpu.pc;
    }
    if (strcmp(regs[k], s) == 0){
      printf("match success,regs[k] is %s\n",regs[k]);
      *success = true;
      return npc_cpu.gpr[k];
    }
  }
  *success = false;
  return 0;
}

