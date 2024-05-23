module top(
	input clk,
	input rst,
	input wen,
	input [31:0] pc,
	output [31:0] rd_data,
	output [31:0] next_pc,
	output [31:0] alu_result
);
wire [6:0] opcode;
wire [4:0] rd_add;
wire [4:0] rs1_add;
wire [31:0] rs1_data;
wire [4:0] rs2_add;
wire [31:0] rs2_data;
//wire [31:0] alu_result;
wire [31:0] ext_imm;
wire [2:0]	Ext_type;
wire ALU_src;
wire [31:0] src1_data;
wire [31:0] src2_data;
wire [4:0] alu_ctrl;
wire [1:0] PC_src;
wire [1:0] RegWrite;
wire vaild;
wire [31:0] instruction;
wire [31:0] memory_out_data;
wire rs2_valid;
wire memory_valid;

pc_transfer_inst inst(.pc(pc),.instruction(instruction));


assign  opcode = instruction[6:0];

//更新pc的值
addpc add_pc(
    .clk(clk),
    .rst(rst),
    .PC_src(PC_src),
    .alu_result(alu_result),
	.ext_imm(ext_imm),
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
	.alu_ctrl(alu_ctrl),
	.memory_valid(memory_valid),
	.rs2_add(rs2_add)
);
//读取src1 寄存器中的地址，为ALU加法做准备

RegisterFile #(5, 32) reg_file (
    .clk(clk),
    .wdata(rd_data),
    .waddr(rd_add),
    .wen(wen),
	.opcode(opcode),
    .Addr1(rs1_add), // 使用rs1_addr作为读地址
    .RData1(rs1_data), // 读取的数据存储在rs1_data
    .Addr2(rs2_add),
    .RData2(rs2_data)
);

Extend instance1(
    .Ext_type(Ext_type),
    .inst(instruction),
    .ext_imm(ext_imm)
);

MuxKeyWithDefault #(2,1,32) src1_data_num (src1_data,ALU_src,32'b0,{
	1'b0, rs1_data,
	1'b1, pc
});
assign rs2_valid = ((opcode == 7'b1100011) ||(opcode == 7'b0110011)) ? 1 : 0;

MuxKeyWithDefault #(2,1,32) src2_data_num (src2_data,rs2_valid,32'b0,{
	1'b0, ext_imm,
	1'b1, rs2_data
});

ALU alu(
	.src1(src1_data),
	.alu_ctrl(alu_ctrl),
	.src2(src2_data),
	.alu_result(alu_result)
);

//jal和jalr都为01，因为x[rd] =pc+4,auipc为 10，x[rd]=pc+sext(imm),lui为11 x[rd] = sext(imm << 12)
MuxKeyWithDefault #(4,2,32) Write_rd_data (rd_data,RegWrite,32'b0,{
	2'b01, pc+32'h4,
	2'b10, alu_result,
	2'b11, ext_imm,
	2'b00, memory_out_data
});

Data_memory memory_1(
	.instruction(instruction),
	.addr(alu_result),
	.write_data(rs2_data),
	.mout_data(memory_out_data));

endmodule