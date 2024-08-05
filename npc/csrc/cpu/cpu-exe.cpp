#include <debug.h>
#include <utils.h>
#include <cpu.h>
#include <reg.h>
#include <memory/paddr.h>
#include <memory/vaddr.h>
#include <common.h>

#define R(i) gpr(i)

void disassemble(char *str,int size,uint64_t pc,uint8_t *code, int nbyte);

CPU_state npc_cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
vaddr_t pre_pc = 0;
void scan_wp();
Vtop *top;
VerilatedVcdC* tfp;
void init_disasm(const char *triple);
void isa_reg_display();
void npc_reg_update();
void difftest_step(vaddr_t pc, vaddr_t npc_pc);
static int istrap = 0;
static int isinv = 0;
char logbuf[128];
uint32_t inst;
vaddr_t pc;
uint64_t sim_time = 0;
int get_inst(long long addr) {
  inst = vaddr_read(addr, 3);
  return inst;
}


 word_t read_mem(vaddr_t addr, int len){
    return vaddr_read(addr,len);
}

 void  write_mem(vaddr_t addr,int len,word_t data){
    vaddr_write(addr,len,data);
}

void update_regs(int idx,word_t data){
    R(idx) = data;
}

void set_npctrap(int i){
    printf("trap break");
    if(i) istrap = 1;
    else istrap = 0;

}

void set_npcinv(int i) {
  if (i) isinv = 1;
  else isinv = 0;
}

static void npc_isa_exec_once(){    
    top->clock = 1;
    top->reset = 0;
    for (int i = 0; i < 2; ++i) {
        top->clock ^= 1;
        top->eval();
        tfp->dump(sim_time);
        sim_time++;

}
  npc_reg_update();
  IFDEF(CONFIG_ITRACE,trace_inst(top->pc,pmem_read(top->pc,4)));
  IFDEF(CONFIG_NPC_WATCHPOINT){scan_wp();}
  // top->io_pc = top->next_pc;

  if(istrap){
    NPCTRAP(npc_cpu.pc, R(10));
  }

  if(isinv){
    INV(npc_cpu.pc);
  }
}

static void npc_exec_once(){
    pre_pc = npc_cpu.pc;
    // printf("io_pc is 0x%x\n",top->io_pc);
    npc_isa_exec_once();
    npc_cpu.pc = top->io_pc;

}


static void npc_execute(uint64_t n){
    for(;n > 0; n--){
        npc_exec_once();
        IFDEF(CONFIG_DIFF_NEMU,difftest_step(pre_pc,npc_cpu.pc);)
        g_nr_guest_inst++;
        if(npc_state.state != NPC_RUNNING) break;
    }

}


static void statistic() {
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0)
    Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else  Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  IFDEF(CONFIG_ITRACE,display_inst());
  isa_reg_display();
  statistic();
}

void npc_cpu_exec(uint64_t n){
    switch (npc_state.state)
    {
    case NPC_END:case NPC_ABORT:
        IFDEF(CONFIG_ITRACE,display_inst());
        return ;
    default: npc_state.state = NPC_RUNNING;
    }

    uint64_t timer_start = get_time();

    npc_execute(n);

    uint64_t timer_end = get_time();
    g_timer += timer_end - timer_start;


    switch (npc_state.state)
    {
    case NPC_RUNNING:
        npc_state.state = NPC_STOP;
        break;
     case NPC_END: case NPC_ABORT:
      printf("this is finall test\n");
      IFDEF(CONFIG_ITRACE,display_inst();isa_reg_display());
      Log("npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
    }
}