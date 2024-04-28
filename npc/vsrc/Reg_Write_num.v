module Reg_Write_num(
    input  [6:0] opcode,
    output [1:0] RegWrite
);

//jal和jalr都为01，因为x[rd] =pc+4,auipc为 10，x[rd]=pc+sext(imm),lui为11 x[rd] = sext(imm << 12)

 MuxKeyWithDefault #(4, 7, 2) Reg_num_inst (RegWrite, opcode, 2'b00, {
    7'b0010111, 2'b10,
    7'b0110111, 2'b11,
    7'b1101111, 2'b01,
    7'b1100111, 2'b01
  });
endmodule