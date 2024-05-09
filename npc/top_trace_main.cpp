#include<stdlib.h>
#include<string.h>
#include <verilated.h>
#include "Vtop.h"
#include "verilated_vcd_c.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"

VerilatedContext* contextp = new VerilatedContext;
VerilatedVcdC* tfp = new VerilatedVcdC;
Vtop* top = new Vtop{contextp};
int flag_break = 0;

void sim_init(){
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("obj_dir/wave.vcd");
}


// 假设这些函数在其他地方已经定义
uint32_t *init_mem(size_t size);
uint32_t guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t *memory, uint32_t vaddr);

void single_cycle() {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
}


void step_and_dump_wave(){
    top->eval();
    tfp->dump(contextp->time());
    contextp->timeInc(1);
}

/*
void  sim_exit(){
  step_and_dump_wave();
  tfp->close();
}*/
//重置
static void reset(int n) {
    top->rst = 1;
    while(n-- > 0) single_cycle();
    top->rst = 0;
}

void trap_ebreak(){
        printf("pc is  %x,pc->next is ebreak \n",top->pc);
        flag_break = 1;
} 
int main() {
    sim_init();
    uint32_t *memory;
    memory = init_mem(4);
    top->wen = 1;
    reset(10);
    // 设置PC的值，注意这里改为了C++中的数值表示
    top->pc = 0x80000000;
    while(!contextp->gotFinish() && flag_break == 0){
        top->instruction = pmem_read(memory, top->pc);
        top->clk = 0;step_and_dump_wave();
        top->clk = 1;step_and_dump_wave();
        printf("ersult is %p\n",top->next_pc);
        top->pc = top->next_pc;
    }
    tfp->close();
    return 0;

}
