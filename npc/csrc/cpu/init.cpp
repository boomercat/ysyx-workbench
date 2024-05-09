#include <cpu.h>
#include <memory/paddr.h>

extern CPU_state npc_cpu ;

void init_cpu(){
    npc_cpu.pc = RESET_VECTOR;

    npc_cpu.gpr[0] = 0;

}

void init_vtop(){
    VerilatedContext* contextp = new VerilatedContext;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Vtop* top = new Vtop{contextp};
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    top->clk = 0;
    top->rst = 0;
    tfp->open("obj_dir/wave.vcd");

}

void restart(){
    init_cpu();
    init_vtop();
}