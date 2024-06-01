module Reg_Write_num(
    input  [6:0] opcode,
    output [2:0] RegWrite
);

//jal和jalr都为01，因为x[rd] =pc+4,auipc为 10，x[rd]=pc+sext(imm),lui为11 x[rd] = sext(imm << 12)
parameter pc_plus4 = 3'b001,
           ALU_result = 3'b010,
           EXT_IMM = 3'b011,
           MEMORY_DATA = 3'b000;
        
 MuxKeyWithDefault #(7, 7, 3) Reg_num_inst (RegWrite, opcode, 3'b111, {
    7'b0010111, 3'b010, //auipc
    7'b0010011, 3'b010, //addi
    7'b0110111, 3'b011, //lui
    7'b1101111, 3'b001, //jal
    7'b1100111, 3'b001,  //jalr
    7'b0000011, 3'b000,  //lb lh lw lbu lhu
    7'b0110011, 3'b010   //add sub.. 

  });
endmodule