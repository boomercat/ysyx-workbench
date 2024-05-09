
#include <circuit.h>

//VerilatedContext* contextp = new VerilatedContext;
//VerilatedVcdC* tfp = new VerilatedVcdC;
Vtop* top = new Vtop{contextp};

#define MAX_INST_TO_PRINT 10;

uint64_t g_nr_guest_inst = 0;

u_int32_t pc,snpc,dnpc,inst,prev_pc;

static uint8_t opcode;

static g_print_step = false;

void single_cycle() {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
}

static void reset(int n) {
    top->rst = 1;
    while(n-- > 0) single_cycle();
    top->rst = 0;
}

static void exec_once(){
    single_cycle();
}

void cpu_exec( u_int32_t n){
    g_print_step = (n < MAX_INST_TO_PRINT);
    while(n>0){
        prev_pc = top->rootp ->
    }


}
