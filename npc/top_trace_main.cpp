//#include<stdio.h>
//#include<stdlib.h>
#include "Vtop.h"
//#include "verilated.h"
#include "verilated_vcd_c.h"

static Vtop dut;

// 假设这些函数在其他地方已经定义
uint32_t *init_mem(size_t size);
uint32_t guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);

void single_cycle() {
    dut.clk = 0; dut.eval();
    dut.clk = 1; dut.eval();
}

static void reset(int n) {
    dut.rst = 1;
    while(n-- > 0) single_cycle();
    dut.rst = 0;
}

int main() {
    uint32_t *memory;
    memory = init_mem(3);
    VerilatedContext* contextp = new VerilatedContext;
    contextp->traceEverOn(true);

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut.trace(tfp, 5);
    tfp->open("obj_dir/wave.vcd");

    reset(10);
    // 设置PC的值，注意这里改为了C++中的数值表示
    dut.pc = 0x80000000;
    for(int i = 0; i < 4; i++) {
        dut.instruction = pmem_read(memory, dut.pc);
        single_cycle();
        tfp->dump(contextp->time());
        contextp->timeInc(1);
    }

    tfp->close();
    delete contextp;
    return 0;
}
