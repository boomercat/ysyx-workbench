module alu_ctrl_num(
    input [6:0] opcode,
    output reg [1:0] alu_ctrl
);



//00为auipc->pc+sext(imm),01为lui->sext(imm),10为jal->pc+sext(offset),11为jalr->(x[rs1]+sext(offset))&~1

 MuxKeyWithDefault #(4, 7, 2) i_test (alu_ctrl, opcode, 2'b00, {
    7'b0010111, 2'b00,
    7'b0110111, 2'b01,
    7'b1101111, 2'b10,
    7'b1100111, 2'b11
  });


endmodule