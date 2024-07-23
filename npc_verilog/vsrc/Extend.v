module Extend(
    input  [2:0]Ext_type,
    input [31:0] inst,
    output [31:0] ext_imm
);

//auipc和lui为01，jal为10，jalr为11,剩下的为00
MuxKeyWithDefault #(5,3,32) test_2 (ext_imm,Ext_type,32'b0,{
    3'b000, {{20{inst[31]}}, inst[31:25], inst[11:7]},           // S型扩展
    3'b001, {inst[31:12], {12'b0}},                              // U型扩展
    3'b010, {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], {1'b0}}, // J型扩展
    3'b011, {{20{inst[31]}}, inst[31:20]},                       // I型扩展
    3'b100, {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], {1'b0}} // B型扩展
  });

endmodule