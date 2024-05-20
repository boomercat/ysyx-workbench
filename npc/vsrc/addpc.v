module addpc(
    input clk,
    input rst,
    input [1:0] PC_src,
    input [31:0] alu_result,
    input [31:0] pc,  // 来自跳转或当前PC加一的值
    output [31:0] next_pc  // 使用wire而非reg，因为它将被Reg模块管理
);

// 计算下一个PC的值

MuxKeyWithDefault #(3, 2, 32) i2 (next_pc, PC_src, 32'h80000000, {
    2'b00, pc + 32'h4, 
    2'b01, pc + alu_result,
    2'b10, alu_result
});


endmodule