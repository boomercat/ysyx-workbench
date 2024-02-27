#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
int main(int argc, char**argv){
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
	while(!contextp->gotFinish()){
    //while (contextp->time() < sim_time && !contextp->gotFinish()) {

		int a = rand() & 1;
		int b = rand() & 1;
		top->a = a;
		top->b = b;
        
		printf("a = %d, b = %d, f = %d", a, b, top->f);
	    tfp->dump(contextp->time());
		contextp->timeInc(1); 
		top->eval();
		assert(top->f == (a ^ b));
		tfp->dump(contextp->time());
	}
	tfp->close();
	delete top;
	delete contextp;
	return 0;
}

