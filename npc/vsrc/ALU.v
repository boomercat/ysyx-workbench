
module ALU (
  //input clk,
	input [31:0] src1,
	input [31:0] src2,
	input [4:0] alu_ctrl,
	output reg [31:0] alu_result
);

//00为auipc->pc+sext(imm),01为lui->sext(imm),10为jal->pc+sext(offset),11为jalr->(x[rs1]+sext(offset))&~1
MuxKeyWithDefault #(18, 5, 32) i0 (alu_result, alu_ctrl, 32'b0, {
   5'b00000, src1 + $signed(src2),
   5'b00001, src2,
   5'b00010, src1 - src2,
   5'b00011, (src1 + src2)& ~1 ,
   5'b00100, {31'b0,($unsigned(src1) < $unsigned(src2))}, //sltiu/sltu 无符号数
   5'b00101, src1 ^ src2,
   5'b00110, src1 | src2,
   5'b00111, src1 & src2,
   5'b01000, src1 << src2[5:0], //slli/sll 移位操作
   5'b01001, $signed(src1) >>> src2[5:0], 
   5'b01010, src1 >> src2[5:0], //srl/srli 移位操作
   5'b01100, {31'b0,($signed(src1) < $signed (src2))}, //slti/slt ->有符号数需符号扩展
   5'b01101, {31'b0,(src1 == src2)},    //beq
   5'b01110, {31'b0,($signed(src1) >= $signed(src2))},  //bge 
   5'b01111, {31'b0,($unsigned(src1) >= $unsigned(src2))}, //bgeu
   5'b10000, {31'b0,($signed(src1) < $signed(src2))},    //blt
   5'b10001, {31'b0,($unsigned(src1) < $unsigned(src2))},//bltu
   5'b10010, {31'b0,(src1 != src2)}//bne
  });


endmodule