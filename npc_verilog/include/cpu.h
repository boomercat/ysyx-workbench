#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__


#include <common.h>

typedef struct 
{
    word_t gpr[32];
    vaddr_t pc;
    word_t mcause;
    vaddr_t mepc;
    word_t mstatus;
    word_t mtvec;
} CPU_state;

extern CPU_state npc_cpu;

void npc_cpu_exec(uint64_t n);

void set_npc_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);


#define NPCTRAP(thispc, code) set_npc_state(NPC_END, thispc, code)
#define INV(thispc) invalid_inst(thispc)

vaddr_t isa_raise_intr(word_t NO, vaddr_t epc);

#define INTR_EMPTY ((word_t)-1)

#endif





