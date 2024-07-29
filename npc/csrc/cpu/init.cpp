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
    // top->io_pc = npc_cpu.pc;
    int n = 0;
    while (n < 10)
    {
        top->clock ^= 1;
        top->reset = 1;
        n++;
    }
    
    top->eval();
    top->reset = 0;
    top->eval();
    // top->wen = 1;



}

void restart(){
    init_cpu();
    init_vtop();
}