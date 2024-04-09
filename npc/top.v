module top(
	input clk,
	input rst,
	input wen,
	//input [31:0] wdata,
	input [31:0] instruction,
	input [31:0] pc,
	output [31:0] rd_data,
	output [31:0] next_pc
);

wire [4:0] rs1_add;
wire [4:0] rd_add;
wire [31:0] imm;
wire [6:0] opcode;
wire [31:0] rs1_data;
wire [31:0] alu_result;

//更新pc的值
addpc add_pc(.clk(clk),.rst(rst),.next_pc(next_pc),.pc(pc));

//解码inst   
//addi (rd = rs1 + imm) rd[11:7] rs1[19:15]
IDU idu(
	.instruction(instruction),
	.rs1(rs1_add),
	.rd(rd_add),
	.imm(imm),
	.opcode(opcode));
//读取src1 寄存器中的地址，为ALU加法做准备



ALU alu(
	.src1(rs1_data),
	.imm(imm),
	.alu_result(alu_result)
);


RegisterFile #(5, 32) reg_file (
    .clk(clk),
    .wdata(alu_result),
    .waddr(rd_add),
    .wen(wen),
    .Addr1(rs1_add), // 使用rs1_addr作为读地址
    .RData1(rs1_data) // 读取的数据存储在rs1_data
);
endmodule

