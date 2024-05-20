
module ALU (
  //input clk,
	input [31:0] src1,
	input [31:0] imm,
	input [3:0] alu_ctrl,
	output reg [31:0] alu_result
);

//00为auipc->pc+sext(imm),01为lui->sext(imm),10为jal->pc+sext(offset),11为jalr->(x[rs1]+sext(offset))&~1
MuxKeyWithDefault #(11, 4, 32) i0 (alu_result, alu_ctrl, 32'b0, {
    4'b0000, src1 + imm,
    4'b0001, imm,
    4'b0010, src1 + imm,
    4'b0011, (src1 + imm)& ~1 ,
    4'b0100, {31'b0,(src1 < imm)},
    4'b0101, src1 ^ imm,
    4'b0110, src1 | imm,
    4'b0111, src1 & imm,
    4'b1000, src1 << imm[5:0],
    4'b1001, src1 >>> imm[5:0],
    4'b1010, src1 >> imm[5:0]
  });


endmodule