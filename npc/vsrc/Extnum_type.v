module Extnum_type(
    input [6:0] opcode,
    output reg  [1:0] Ext_type
);


//auipc和lui为01，jal为10，jalr为11,剩下的为00

 MuxKeyWithDefault #(5, 7, 2) i_extnum (Ext_type, opcode, 2'b00, {
    7'b0010011 , 2'b11,   //addi
    7'b0110111 , 2'b01,
    7'b0010111 , 2'b01,
    7'b1101111 , 2'b10,
    7'b1100111 , 2'b00
  });


endmodule