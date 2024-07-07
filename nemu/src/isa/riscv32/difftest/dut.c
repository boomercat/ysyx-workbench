/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
//把通用寄存器和PC与从DUT中读出寄存器值进行比较
// bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) { 
//   int reg_num = ARRLEN(cpu.gpr);
//   for (int i = 0; i < reg_num; i++) {
//     if (ref_r->gpr[i] != cpu.gpr[i]) {
//       printf("reg %d is wrong\n",i);
//       return false;
//     }
//   }
//   if(ref_r->csr.mcause != cpu.csr.mcause){
//     printf("CSR mcause is wrong\n");
//     return false;
//   }
//   if(ref_r->csr.mepc   != cpu.csr.mepc) {
//     printf("CSR mepc is wrong\n");
//     return false;
//   }
//   if(ref_r->csr.mstatus!= cpu.csr.mstatus){
//     printf("CSR mstatus is wrong\n");
//     return false;  
//   }
//   if(ref_r->csr.mtvec  != cpu.csr.mtvec){
//     printf("CSR mtvec is wrong\n");
//     return false;
//   }
//   if (ref_r->pc != cpu.pc) {
//     return false;
//   }
//   return true;
// }
 
 #define CHECKDIFF(p) if (ref_r->p != cpu.p) { \
  printf("difftest fail at " #p ", expect %x got %x\n", ref_r->p, cpu.p); \
  return false; \
}
#define CHECKDIFF_FMT(p, fmt, ...) if (ref_r->p != cpu.p) { \
  printf("difftest fail at " fmt ", expect %x got %x\n", ## __VA_ARGS__, ref_r->p, cpu.p); \
  return false; \
}


bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int reg_num = ARRLEN(cpu.gpr);
  for (int i = 0; i < reg_num; i++) {
    if (ref_r->gpr[i] != cpu.gpr[i]) {
      printf("reg %d is wrong,right value is %x\n",i,ref_r->gpr[i]);
      return false;
    }
  }
  if (ref_r->pc != cpu.pc) {
    return false;
  }
  CHECKDIFF(mstatus);
  CHECKDIFF(mcause);
  CHECKDIFF(mepc);
  CHECKDIFF(mtvec);
  return true;
}



void isa_difftest_attach() {
}
