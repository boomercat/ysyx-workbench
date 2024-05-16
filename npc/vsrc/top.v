module top(
	input clk,
	input rst,
	input wen,
	input [31:0] instruction,
	input [31:0] pc,
	output [31:0] rd_data,
	output [31:0] next_pc,
	output [31:0] alu_result
);

wire [4:0] rs1_add;
wire [4:0] rd_add;
wire [6:0] opcode;
wire [31:0] rs1_data;
//wire [31:0] alu_result;
wire [31:0] ext_imm;
wire [1:0]	Ext_type;
wire ALU_src;
wire [31:0] out_data1;
wire [2:0] alu_ctrl;
wire [1:0] PC_src;
wire [1:0] RegWrite;

assign  opcode = instruction[6:0];

//更新pc的值
addpc add_pc(
    .clk(clk),
    .rst(rst),
    .PC_src(PC_src),
    .alu_result(alu_result),
    .pc(pc),  
    .next_pc(next_pc)  
);

IDU idu(
	.clk(clk),
	.instruction(instruction),
	.Ext_type(Ext_type),
	.ALU_src(ALU_src),
	.RegWrite(RegWrite),
	.PC_src(PC_src),
	.rs1_add(rs1_add),
	.rd_add(rd_add),
	.alu_ctrl(alu_ctrl)
);
//读取src1 寄存器中的地址，为ALU加法做准备

RegisterFile #(5, 32) reg_file (
    .clk(clk),
    .wdata(rd_data),
    .waddr(rd_add),
    .wen(wen),
	.opcode(opcode),
    .Addr1(rs1_add), // 使用rs1_addr作为读地址
    .RData1(rs1_data) // 读取的数据存储在rs1_data
);


MuxKeyWithDefault #(2,1,32) test_1 (out_data1,ALU_src,32'b0,{
	1'b0, rs1_data,
	1'b1, pc
});

Extend instance1(
    .Ext_type(Ext_type),
    .inst(instruction),
    .ext_imm(ext_imm)
);



ALU alu(
	.src1(out_data1),
	.alu_ctrl(alu_ctrl),
	.imm(ext_imm),
	.alu_result(alu_result)
);

//jal和jalr都为01，因为x[rd] =pc+4,auipc为 10，x[rd]=pc+sext(imm),lui为11 x[rd] = sext(imm << 12)
MuxKeyWithDefault #(3,2,32) Write_rd_data (rd_data,RegWrite,32'b0,{
	2'b01, pc+32'h4,
	2'b10, alu_result,
	2'b11, ext_imm
});


endmodule