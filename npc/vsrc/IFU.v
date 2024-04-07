module IFU(
    input clk,
    input reset,
    input [31:0] next_pc,  // 来自跳转或当前PC加一的值
    output reg [31:0] pc
    //output [31:0] inst  通过c++ top->inst = pmem_read(top->pc)实现
);


Reg #(32, {1'b1,{31{1'b0}}}) pc_reg(   //更新pc
	.clk(clk),
	.rst(reset),
	.din(next_pc),
	.dout(pc),
	.wen(1'b1)
);

endmodule
