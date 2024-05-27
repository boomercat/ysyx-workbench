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
wire [31:0] src1_data;
wire [31:0] src2_data;
wire [4:0] alu_ctrl;
wire [2:0] PC_src;
wire [2:0] RegWrite;
wire vaild;
wire [31:0] instruction;
wire [31:0] memory_out_data;
wire memory_valid;
wire [9:0] opcode_plus;
assign opcode_plus = {instruction[14:12],instruction[6:0]};
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

//auipc指令时ALUsrc为pc+imm
MuxKeyWithDefault #(9,7,32) src1_data_num (src1_data,opcode,32'b0,{
	7'b0110111 , 32'b0   ,  //lui
	7'b1101111 , pc     ,  //jal
	7'b1100111, rs1_data,  //jalr
	7'b0010111, pc		,  //auipc
	7'b1100011, rs1_data,  //bne beq blt bge bltu bgeu
	7'b0000011, rs1_data, // lb lh lw lbu lhu
	7'b0100011, rs1_data, //sb sh sw
	7'b0010011, rs1_data, // addi slti sltiu xori andi
	7'b0110011, rs1_data //add sub sll slt sltu xor srl sra or and
});



MuxKeyWithDefault #(9,7,32) src2_data_num (src2_data,opcode,32'b0,{
	7'b0110111 , ext_imm ,  //lui
	7'b0010111 , ext_imm   ,  //auipc
	7'b1101111 , 32'h4 ,   //jal
	7'b1100111 , 32'h4,   //jalr
	7'b1100011 , rs2_data, //beq bne blt bge bltu bgeu
	7'b0000011 , ext_imm,  // lb lh lw lbu lhu
	7'b0100011 , ext_imm, // sb sh sw
	7'b0010011 , ext_imm, // addi slti xori ori andi slli srli srai
	7'b0110011 , rs2_data// add sub sll slt sltu xor srl sra or and
});

ALU alu(
	.instruction(instruction),
	.src1(src1_data),
	.alu_ctrl(alu_ctrl),
	.src2(src2_data),
	.alu_result(alu_result)
);


Data_memory memory_1(
	.clk(clk),
	.instruction(instruction),
	.addr(alu_result),
	.write_data(rs2_data),
	.mout_data(memory_out_data));

//jal和jalr都为01，因为x[rd] =pc+4,auipc为 10，x[rd]=pc+sext(imm),lui为11 x[rd] = sext(imm << 12)
MuxKeyWithDefault #(4,3,32) Write_rd_data (rd_data,RegWrite,32'b0,{
	3'b001, pc+32'h4,
	3'b010, alu_result,
	3'b011, ext_imm,
	3'b000, memory_out_data
});


endmodule