module Extend(
    input  Ext_type,
    input [31:0] inst,
    output [31:0] ext_imm
);

MuxKeyWithDefault #(2,1,32) test_2 (ext_imm,Ext_type,32'b0,{
    1'b0, {{20{inst[31]}},inst[31:20]},
    1'b1, {inst[31:12], 12'b0}
});



endmodule