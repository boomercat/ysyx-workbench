
module ALU (
  //input clk,
	input [31:0] src1,
	input [31:0] imm,
	input [2:0] alu_ctrl,
	output reg [31:0] alu_result
);

//00为auipc->pc+sext(imm),01为lui->sext(imm),10为jal->pc+sext(offset),11为jalr->(x[rs1]+sext(offset))&~1
MuxKeyWithDefault #(5, 3, 32) i0 (alu_result, alu_ctrl, 32'b0, {
    3'b000, src1 + imm,
    3'b001, imm,
    3'b010, src1 + imm,
    3'b011, (src1 + imm)& ~1 ,
    3'b100, (src1 < imm) ? {{31'b0},1'b1} : 32'b0
  });
// always @(posedge clk ) begin
//   case (alu_ctrl)
//     3'b000 : alu_result = src1 + imm;
//     3'b001 : alu_result = imm;
//     3'b010 : alu_result = src1 + imm;
//     3'b011 : alu_result =  (src1 + imm)& ~1 ;
//     3'b100 : alu_result = (src1 < imm) ? {{31'b0},1'b1} : 32'b0 ; 
//     default: alu_result = 32'b0;
//   endcase
  
// end

endmodule