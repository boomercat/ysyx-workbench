
module ALU (
  //input clk,
	input [31:0] src1,
	input [31:0] src2,
	input [3:0] alu_ctrl,
	output reg [31:0] alu_result
);

//00为auipc->pc+sext(imm),01为lui->sext(imm),10为jal->pc+sext(offset),11为jalr->(x[rs1]+sext(offset))&~1
MuxKeyWithDefault #(12, 4, 32) i0 (alu_result, alu_ctrl, 32'b0, {
    4'b0000, src1 + src2,
    4'b0001, src2,
    4'b0010, src1 - src2,
    4'b0011, (src1 + src2)& ~1 ,
    4'b0100, {31'b0,($unsigned(src1) < $unsigned(src2))}, //sltiu/sltu 无符号数
    4'b0101, src1 ^ src2,
    4'b0110, src1 | src2,
    4'b0111, src1 & src2,
    4'b1000, src1 << src2[5:0], //slli/sll 移位操作
    4'b1001, src1 >>> src2[5:0], 
    4'b1010, src1 >> src2[5:0], //srl/srli 移位操作
    4'b1100, {31'b0,($signed(src1) < $signed (src2))} //slti/slt ->有符号数需符号扩展
  });


endmodule