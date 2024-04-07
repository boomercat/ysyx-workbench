#include<stdio.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
static Vtop dut;
u_int32_t *init_mem(size_t size);
u_int32_t guest_to_host(u_int32_t addr);
u_int32_t pmem_read(u_int32_t *memory,u_int32_t vaddr);

void single_cycle(){
	dut.clk=0;dut.eval;
	dut.clk=1;dut.eval;

}

static void reset(int n){
	dut.rst = 1;
	while(n-- > 0) single_cycle();
	dut.rst = 0;
}

int main( ){
	__uint32_t *memory;
	memory = init_mem(3);
	//初始化一个VerilatedCOntext对象，把地址复制给contextp。为verilator仿真做准备
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	contextp->traceEverOn(true);//追踪波形
	Vtop* top= new Vtop{contextp};//创建一个Vtop类的对象，把contextp的参数复制给Vtop

	//const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};  
	//初始化一个 VerilatedVcdc的类，把地址赋值给指针tfp。
    VerilatedVcdC* tfp = new VerilatedVcdC;
	top->trace(tfp,0); //将top模块的模型信息输出到tfp指向的vcd对象
	tfp->open("obj_dir/wave.vcd");//打开波形文件
	/*
	while(!contextp->gotFinish()){
    //while (contextp->time() < sim_time && !contextp->gotFinish()) {


		top->inst = pmem_read(top->pc);
	    tfp->dump(contextp->time());
		contextp->timeInc(1); 
		top->eval();
		tfp->dump(contextp->time());
	}*/
	reset(10);
	dut.pc = 32'b10000000000000000000000000000000
	for(int i = 0;i < 4;i++){
		dut.instruction = pmem_read(memory,dut.pc);
		single_cycle();
		tfp->dump(contextp->time());
		contextp->timeInc(1);
	}
	tfp->close();
	delete top;
	delete contextp;
	return 0;
}

