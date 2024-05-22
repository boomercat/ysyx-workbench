module Extnum_type(
    input [6:0] opcode,
    output reg  [1:0] Ext_type
);

parameter IMM_I = 2'b11,
           IMM_U = 2'b01,
           IMM_Jal = 2'b10, //jal
           IMM_S = 2'b00;
//auipc和lui为01，jal为10，jalr为11,剩下的为00

 MuxKeyWithDefault #(6, 7, 2) i_extnum (Ext_type, opcode, 2'b00, {
    7'b0010011 , IMM_I,   //addi, slti, sltiu, xori
    7'b0110111 , IMM_U,   //lui
    7'b0010111 , IMM_U,   //auipc
    7'b1101111 , IMM_Jal,  //jal
    7'b1100111 , IMM_I,  //jalr
    7'b0100011 , IMM_S    //sb sh sw
  });


endmodule