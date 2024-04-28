
module ALU (
	input [31:0] src1,
	input [31:0] imm,
	input [1:0] alu_ctrl,
	output [31:0] alu_result
);

//00为auipc->pc+sext(imm),01为lui->sext(imm),10为jal->pc+sext(offset),11为jalr->(x[rs1]+sext(offset))&~1
MuxKeyWithDefault #(4, 2, 32) i0 (alu_result, alu_ctrl, 32'b0, {
    2'b00, src1 + imm,
    2'b01, imm,
    2'b10, src1 + imm,
    2'b11, (src1 + imm)&~1
  });


endmodule