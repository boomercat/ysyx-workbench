#include<cpu.h>

word_t isa_raise_intr(word_t NO,vaddr_t epc){
    npc_cpu.mcause = NO;
    npc_cpu.mepc = epc;
    //清除MPIE位
    npc_cpu.mstatus &= ~(1<<7);
    //将当前的MIE位赋值到MPIE位
    npc_cpu.mstatus |= ((npc_cpu.mstatus&(1<<3))<<4); //MPIE=MIE
    //清除MIE位
    npc_cpu.mstatus &= ~(1<<3);
    //设置MPP位为11 （machine mode） mpp=011
    npc_cpu.mstatus |= ((1<<11)+(1<<12));
    return npc_cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

