#include <memory/paddr.h>
#include <memory/vaddr.h>
#include <debug.h>
#include <utils.h>
#include <cpu.h>
#include <reg.h>


#define R(i) gpr(i)


CPU_state npc_cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
vaddr_t pre_pc = 0;

Vtop* top;
VerilatedVcdC* tfp;
uint64_t sim_time = 0;
static int istrap = 0;
static int isinv = 0;
char logbuf[128];
uint32_t inst;
vaddr_t pc;

void isa_reg_display();

word_t get_inst(vaddr_t addr) {
  inst = vaddr_read(addr, 4);
  return inst;
}

word_t read_mem(vaddr_t addr, int len){
    return vaddr_read(addr,len);
}

void write_mem(vaddr_t addr,int len,word_t data){
    vaddr_write(addr,len,data);
}

void update_regs(int idx,word_t data){
    R(idx) = data;
}

void set_npctrap(int i){
    if(i) istrap = 1;
    else istrap = 0;

}

void set_npcinv(int i) {
  if (i) isinv = 1;
  else isinv = 0;
}

static void npc_isa_exec_once(){
    for (int i = 0; i < 2; ++i) {
        top->clk ^= 1;
        top->eval();
        tfp->dump(sim_time);
        sim_time++;
  }

  if(istrap){
    NPCTRAP(n_cpu.pc, R(10));
  }

  if(isinv){
    INV(n_cpu.pc)
  }
}

static void npc_exec_once(){
    pre_pc = npc_cpu.pc;
    npc_isa_exec_once();
    npc_cpu.pc = top->pc;
}


static void npc_execute(uint64_t n){
    for(;n > 0; n--){
        npc_exec_once();
        g_nr_guest_inst++;
        if(npc_state.state != NPC_RUNNING) break;
    }

}


static void statistic() {
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

void npc_cpu_exec(uint64_t n){
    switch (npc_state.state)
    {
    case NPC_END:case NPC_ABORT:
        printf("program finished,and restart the program agai \n");
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
      Log("npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
    }
}