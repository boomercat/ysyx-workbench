module PC_src_num(
    input [6:0] opcode,
    output [1:0] PC_src
);
//assign PC_src   = ((opcode == 7'b1101111)||(opcode == 7'b1100111)) ? 1 : 0;


 MuxKeyWithDefault #(4, 7, 2) PC_src_num_mux (PC_src, opcode, 2'b00, {
    7'b0010111, 2'b00,
    7'b0110111, 2'b00,
    7'b1101111, 2'b01,
    7'b1100111, 2'b10
  });

endmodule