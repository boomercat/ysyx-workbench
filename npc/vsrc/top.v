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

module ALU(
    input [31:0] src1,
    //input [31:0] operand2,
    input [31:0] imm,
    //input [3:0] alu_op,  // ALU操作类型
    output reg [31:0] alu_result
    // 根据需要添加更多输入输出
);
/*
always @(*) begin
    case (alu_op)
        // 定义不同的操作，例如加法、减法等
        4'b0000: alu_result = operand1 + operand2;  // 示例：加法
        // 添加其他操作
        default: alu_result = 32'b0;
    endcase
end*/
assign alu_result = imm + src1;

endmodule


module IDU(
    input [31:0] instruction,
    output reg [4:0] rs1,
    output reg [4:0] rd,
    output reg [31:0] imm,
    output reg [6:0] opcode
    //output reg [2:0] funct3
    // 还可以根据需要输出更多的控制信号
);

assign  opcode = instruction[6:0];
assign  rs1 = instruction[19:15];
assign  rd = instruction[11:7];
assign  imm = {{20{instruction[31]}},instruction[31:20]};  // 立即数的符号扩展
//assign funct3 = instruction[14:12];
    // 根据opcode设置其他控制信号


endmodule


// 触发器模板
module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule

module RegisterFile #(ADDR_WIDTH = 32, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,//write data
  input [ADDR_WIDTH-1:0] waddr,//write address
  input wen,     
  input [ADDR_WIDTH-1:0] Addr1, //read add
  output [DATA_WIDTH-1:0] RData1 //output the add1's data 

);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0]; //寄存器文件数组
  //write operation
  always @(posedge clk) begin
    if (wen && (waddr!=0)) rf[waddr] <= wdata;
  end

  //read operation and 0 register
  assign RData1 = (Addr1==0) ? 0 : rf[Addr1];
endmodule
