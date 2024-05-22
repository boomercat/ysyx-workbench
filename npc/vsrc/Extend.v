module Extend(
    input  [1:0]Ext_type,
    input [31:0] inst,
    output [31:0] ext_imm
);

//auipc和lui为01，jal为10，jalr为11,剩下的为00
MuxKeyWithDefault #(4,2,32) test_2 (ext_imm,Ext_type,32'b0,{
    2'b00, {{20{inst[31]}}, inst[31:25], inst[11:7]}, //S型扩展
    2'b01, {inst[31:12], {12'b0}},  //I型扩展
    2'b10, {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], {1'b0}}, //J型扩展
    2'b11, {{20{inst[31]}}, inst[31:20]}     //B型扩展
});



endmodule