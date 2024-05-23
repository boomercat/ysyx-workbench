module addpc(
    input clk,
    input rst,
    input [1:0] PC_src,
    input [31:0] alu_result,
    input [31:0] pc,  // 来自跳转或当前PC加一的值
    input [31:0] ext_imm,
    output [31:0] next_pc  // 使用wire而非reg，因为它将被Reg模块管理  
);
wire [1:0] next_pc_type ; 
assign next_pc_type = ((PC_src == 2'b11)&&(alu_result==1)) ? 2'b11 : PC_src;
// 计算下一个PC的值

MuxKeyWithDefault #(4, 2, 32) i2 (next_pc, next_pc_type, 32'h80000000, {
    2'b00, pc + 32'h4, 
    2'b01, pc + alu_result,
    2'b10, alu_result,
    2'b11, pc + ext_imm
});


endmodule