
module ALU (
  input clk,
  input [31:0] instruction,
	input [31:0] src1,
	input [31:0] src2,
	input [4:0] alu_ctrl,
	output reg [31:0] alu_result
);
always @(posedge clk or negedge clk) begin
  casez (alu_ctrl) 
   5'b00000: alu_result = src1 + src2;
   5'b00001: alu_result = src2;
   5'b00010: alu_result = src1 - src2;
   5'b00011: alu_result = (src1 + src2) & ~1 ;
  //  5'b00100:  alu_result={31'b0,($unsigned(src1) < $unsigned(src2))};//sltiu/sltu 无符号数
  5'b00100 : alu_result = ($unsigned(src1) < $unsigned(src2)) ? 32'b1 : 32'b0;
   5'b00101: alu_result =src1 ^ src2;
   5'b00110: alu_result =src1 | src2;
   5'b00111: alu_result =src1 & src2;
   5'b01000: alu_result =src1 << src2[4:0]; //sll 移位操作
   5'b01001: alu_result =$signed(src1) >>> src2[4:0]; //sra
   5'b01010: alu_result =src1 >> src2[4:0]; //srl 移位操作
  //  5'b01100: alu_result ={31'b0,(src1 < $signed(src2) ? 1'b1 : 1'b0) };//slti/slt ->有符号数需符号扩展
   5'b01100: alu_result = ($signed(src1) < $signed(src2)) ? 32'b1 :  32'b0;
   5'b01101: alu_result = ($signed(src1) == $signed(src2)) ? 32'b1 : 32'b0;   //beq
   5'b01110: alu_result = ($signed(src1) >= $signed(src2)) ? 32'b1 : 32'b0; //bge 
   5'b01111: alu_result = ($unsigned(src1) >= $unsigned(src2))? 32'b1 : 32'b0; //bgeu
   5'b10000: alu_result = ($signed(src1) < $signed(src2)) ? 32'b1 : 32'b0;   //blt
   5'b10001: alu_result = ($unsigned(src1) < $unsigned(src2)) ?  32'b1 : 32'b0;//bltu
   5'b10010: alu_result = (src1 != src2) ? 32'b1 : 32'b0;//bne
   5'b10011: alu_result = src1 << instruction[24:20];//slli
   5'b10100: alu_result =$signed(src1) >>> instruction[24:20]; //srai
   5'b10101: alu_result = src1 >> instruction[24:20];//srli
    default: alu_result = src1  + src2;
  endcase

end
//00为auipc->pc+sext(imm),01为lui->sext(imm),10为jal->pc+sext(offset),11为jalr->(x[rs1]+sext(offset))&~1
// MuxKeyWithDefault #(21, 5, 32) i0 (alu_result, alu_ctrl, 32'b0, {
//    5'b00000, src1 + src2,
//    5'b00001, src2,
//    5'b00010, src1 - src2,
//    5'b00011, (src1 + src2)& ~1 ,
//    5'b00100, {31'b0,($unsigned(src1) < $unsigned(src2))}, //sltiu/sltu 无符号数
//    5'b00101, src1 ^ src2,
//    5'b00110, src1 | src2,
//    5'b00111, src1 & src2,
//    5'b01000, src1 << src2[4:0], //sll 移位操作
//    5'b01001, $signed(src1) >>> src2[4:0],  //sra
//    5'b01010, src1 >> src2[4:0], //srl 移位操作
//    5'b01100, {31'b0,($signed(src1) < $signed(src2)) }, //slti/slt ->有符号数需符号扩展
//    5'b01101, {31'b0,(src1 == src2)},    //beq
//    5'b01110, {31'b0,($signed(src1) >= $signed(src2))},  //bge 
//    5'b01111, {31'b0,($unsigned(src1) >= $unsigned(src2))}, //bgeu
//    5'b10000, {31'b0,($signed(src1) < $signed(src2))},    //blt
//    5'b10001, {31'b0,($unsigned(src1) < $unsigned(src2))},//bltu
//    5'b10010, {31'b0,(src1 != src2)},//bne
//    5'b10011, src1 << instruction[24:20], //slli
//    5'b10100, $signed(src1) >>> instruction[24:20], //srai
//    5'b10101, src1 >> instruction[24:20]//srli



//   });


endmodule