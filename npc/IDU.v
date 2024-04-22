module IDU(
    input [31:0] instruction,
    output reg  Ext_type,
    output reg  ALU_src,
    output reg [4:0] rd_add,
    output reg [4:0] rs1_add
    //output reg [2:0] funct3
    // 还可以根据需要输出更多的控制信号
);

wire [6:0] opcode;
//assign  imm = {{20{instruction[31]}},instrucion[31:20]};  // 立即数的符号扩展
//assign funct3 = instruction[14:12][]
    // 根据opcode设置其他控制信号
assign  opcode = instruction[6:0];
assign  rs1_add = instruction[19:15];
assign  rd_add = instruction[11:7];
import "DPI-C" function void trap_ebreak();
always @(*) begin
    if(opcode == 7'b1110011)begin
    trap_ebreak();
    end
end

assign ALU_src  = (opcode == 7'b0010111)                        ?     1'b1 : 1'b0;
assign Ext_type = ((opcode == 7'b0110111)||(opcode == 7'b0010111)) ? 1 : 0;
endmodule
