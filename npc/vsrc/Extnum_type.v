module Extnum_type(
    input [6:0] opcode,
    output reg  [2:0] Ext_type
);

parameter IMM_I = 3'b011,
           IMM_U = 3'b001,
           IMM_Jal = 3'b010, //jal
           IMM_S = 3'b000;
//auipc和lui为01，jal为10，jalr为11,剩下的为00

 MuxKeyWithDefault #(7, 7, 3) i_extnum (Ext_type, opcode, 3'b000, {
    7'b0010011 , IMM_I,   //addi, slti, sltiu, xori
    7'b0000011 , IMM_I,   //ld lh lb
    7'b0110111 , IMM_U,   //lui
    7'b0010111 , IMM_U,   //auipc
    7'b1101111 , IMM_Jal,  //jal
    7'b1100111 , IMM_I,  //jalr
    7'b0100011 , IMM_S    //sb sh sw
  });


endmodule