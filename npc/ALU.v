
module ALU (
	input [31:0] src1,
	input [31:0] imm,
	output [31:0] alu_result
);



assign alu_result = src1 + imm;


endmodule