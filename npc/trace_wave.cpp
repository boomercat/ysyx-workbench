#include <circuit.h>


VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC* tfp = new VerilatedVcdC;

void init_sim(){
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("obj_dir/wave.vcd");

}

void step_and_dump_wave(){
    top->eval();
    tfp->dump(contextp->time());
    contextp->timeInc(1);
}


void sim_exit(){
    tfp->close();
}
