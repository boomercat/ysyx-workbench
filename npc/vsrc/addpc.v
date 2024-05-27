module addpc(
    input clk,
    input rst,
    input [2:0] PC_src,
    input [31:0] alu_result,
    input [31:0] pc,  // 来自跳转或当前PC加一的值
    input [31:0] ext_imm,
    output [31:0] next_pc  // 使用wire而非reg，因为它将被Reg模块管理  
);
wire [2:0] next_pc_type ; 
assign next_pc_type = ((PC_src == 3'b011)&&(alu_result==32'b1)) ? 3'b011 : 
                      ((PC_src == 3'b011)&&(alu_result==32'b0)) ? 3'b000 :
                      PC_src;
// 计算下一个PC的值

MuxKeyWithDefault #(5, 3, 32) i2 (next_pc, next_pc_type, 32'h80000000, {
    3'b000, pc + 32'h4, 
    3'b001, pc + alu_result,
    3'b010, alu_result,
    3'b011, pc + ext_imm,
    3'b100, pc+ext_imm
});


endmodule