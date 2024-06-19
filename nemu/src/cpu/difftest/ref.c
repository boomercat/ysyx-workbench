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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
struct npc_difftest 
{
  word_t gpr[32];
  word_t pc;

  word_t mcause;
  vaddr_t mepc;
  word_t mstatus;
  word_t mtvec;
};

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  //void *nemu_buf = (void *)guest_to_host(addr);
  // `direction`指定拷贝的方向, `DIFFTEST_TO_DUT`表示往DUT拷贝, `DIFFTEST_TO_REF`表示往REF拷贝
  if(direction == DIFFTEST_TO_REF) {
    memcpy(guest_to_host(addr),buf,n);
      printf("nemu difftest memcpy finish\n");

  }
  // else if(direction == DIFFTEST_TO_DUT){
  //   memcpy(nemu_buf,buf,n);
  // }
}
// `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
// `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;
__EXPORT void difftest_regcpy(void *dut, bool direction) {
  struct npc_difftest *dut_state = (struct npc_difftest*) dut;
  if(direction == DIFFTEST_TO_DUT){
    for (int i = 0; i < 32; i++)
    {
      dut_state->gpr[i] = cpu.gpr[i];
    }   
    dut_state->pc = cpu.pc;
    dut_state->mcause = cpu.mcause;
    dut_state->mepc = cpu.mepc;
    dut_state->mstatus = cpu.mstatus;
    dut_state->mtvec = cpu.mtvec;
  }
  else if(direction == DIFFTEST_TO_REF){
    for(int i = 0; i < 32; i++){
      cpu.gpr[i] = dut_state->gpr[i];
    }
    cpu.pc = dut_state->pc;
    cpu.mcause = dut_state->mcause;
    cpu.mepc = dut_state->mepc;
    cpu.mstatus = dut_state->mstatus;
    cpu.mtvec = dut_state->mtvec;
  }
  printf("nemu difftest reg cpoy finish\n");
}

__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n); 
  printf("nemu exe one\n");
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  printf("NEMU init_difftest now!!\n");
  Log("NEMU init_difftest now!!");
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
