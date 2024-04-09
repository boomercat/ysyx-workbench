module IDU(
    input [31:0] instruction,
    output reg [4:0] rs1,
    output reg [4:0] rd,
    output reg [31:0] imm,
    output reg [6:0] opcode
    //output reg [2:0] funct3
    // 还可以根据需要输出更多的控制信号
);

import "DPI-C" function void trap_ebreak();
assign  opcode = instruction[6:0];
assign  rs1 = instruction[19:15];
assign  rd = instruction[11:7];
assign  imm = {{20{instruction[31]}},instruction[31:20]};  // 立即数的符号扩展
//assign funct3 = instruction[14:12];
    // 根据opcode设置其他控制信号
always @(*) begin
    if((opcode == 7'b1110011)&&(imm == {{20{1'b0}},{12'b000000000001}}))begin
    trap_ebreak();
    end
end

endmodule
