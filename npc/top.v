module top(
	input clk,
	input rst,
	input wen,
	input [31:0] instruction,
	input [31:0] pc,
	output [31:0] rd_data,
	output [31:0] next_pc
);

wire [4:0] rs1_add;
wire [4:0] rd_add;
wire [6:0] opcode;
wire [31:0] rs1_data;
wire [31:0] alu_result;
wire [31:0] ext_imm;
wire  Ext_type;
wire ALU_src;
wire [31:0] out_data1;
//更新pc的值
addpc add_pc(.clk(clk),.rst(rst),.next_pc(next_pc),.pc(pc));

IDU idu(
	.instruction(instruction),
	.Ext_type(Ext_type),
	.ALU_src(ALU_src),
	.rs1_add(rs1_add),
	.rd_add(rd_add)
);
//读取src1 寄存器中的地址，为ALU加法做准备


RegisterFile #(5, 32) reg_file (
    .clk(clk),
    .wdata(alu_result),
    .waddr(rd_add),
    .wen(wen),
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
	.imm(ext_imm),
	.alu_result(alu_result)
);

endmodule