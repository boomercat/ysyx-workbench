module addpc(
    input clk,
    input rst,
    input PC_src,
    input [31:0] alu_result,
    input [31:0] pc,  // 来自跳转或当前PC加一的值
    output [31:0] next_pc  // 使用wire而非reg，因为它将被Reg模块管理
);

// 计算下一个PC的值

MuxKeyWithDefault #(2, 1, 32) i2 (next_pc, PC_src, 32'h80000000, {
    1'b0, pc + 32'h4, 
    1'b1, pc + alu_result
});

/*
// 使用Reg模块来保存下一个PC值
Reg #(32, 32'h80000000) pc_reg(   // 更新pc，假设复位值为32'h80000000
    .clk(clk),
    .rst(rst),
    .din(pc_plus_4), // 应该使用pc + 4的结果
    .dout(next_pc),
    .wen(1'b1)
);
*/
endmodule