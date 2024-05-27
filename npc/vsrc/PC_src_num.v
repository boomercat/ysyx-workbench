module PC_src_num(
    input [6:0] opcode,
    output [2:0] PC_src
);
//assign PC_src   = ((opcode == 7'b1101111)||(opcode == 7'b1100111)) ? 1 : 0;

parameter pc_plus = 3'b000,
           pc_ALUresult = 3'b001,
           ALU_result = 3'b010,
           branch = 3'b011,
           pc_jal = 3'b100;

 MuxKeyWithDefault #(5, 7, 3) PC_src_num_mux (PC_src, opcode, 3'b000, {
    7'b0010111, pc_plus,    //auipc
    7'b0110111, pc_plus,    //lui
    7'b1100111, ALU_result, //jalr
    7'b1100011, branch ,   //beq bne blt bge bgeu
    7'b1101111, pc_jal  //jal
  });

endmodule