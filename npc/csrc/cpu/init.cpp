#include <cpu.h>
#include <memory/paddr.h>

extern CPU_state npc_cpu ;

void init_cpu(){
    npc_cpu.pc = RESET_VECTOR;

    npc_cpu.gpr[0] = 0;

}

void init_vtop(){
    VerilatedContext* contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtop;
    contextp->traceEverOn(true);
    top->pc = npc_cpu.pc;
    top->trace(tfp,0);
    top->clk = 0;
    top->rst = 0;
    tfp->open("./wave.vcd");

}

void restart(){
    init_cpu();
    init_vtop();
}