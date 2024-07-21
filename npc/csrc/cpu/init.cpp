#include <cpu.h>
#include <memory/paddr.h>
#define WAVE_TRACE
extern CPU_state npc_cpu ;

void init_cpu(){
    npc_cpu.pc = RESET_VECTOR;

    npc_cpu.gpr[0] = 0;

}

void init_vtop(){
    VerilatedContext* contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtop;
    #ifdef WAVE_TRACE
    Verilated::traceEverOn(true);
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("./wave.vcd");
    #endif
    top->pc = npc_cpu.pc;
    top->clk = 0;
    top->rst = 1;
    top->wen = 1;
    top->eval();

}

void restart(){
    init_cpu();
    init_vtop();
}