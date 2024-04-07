module top(
	input clk,
	input [31:0]next_pc,
	input reset,
	input wen,
	input [31:0] wdata,
	input [31:0] instruction,

	output [31:0] pc
);

wire [4:0] rs1_add;
wire [4:0] rd_add;
wire [31:0] imm;
wire [6:0] opcode;
wire [31:0] rs1_data;
wire [31:0] alu_result;


IFU ifu(.clk(clk),.reset(reset),.next_pc(next_pc),.pc(pc));

IDU idu(
	.instruction(instruction),
	.rs1(rs1_add),
	.rd(rd_add),
	.imm(imm),
	.opcode(opcode));

RegisterFile #(5,32
) reg_file(
	.clk(clk),
	.wdata(wdata),
	.waddr(rd_add),
	.wen(wen),
	.Addr1(rs1_add),
	.RData1(rs1_data)
);


ALU alu(
	.src1(rs1_data),
	.imm(imm),
	.alu_result(alu_result)
);
endmodule

