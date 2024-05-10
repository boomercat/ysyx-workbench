module IDU(
    input [31:0] instruction,
    output reg [1:0] Ext_type,
    output reg  ALU_src,
    output reg [1:0] RegWrite,
    output reg PC_src,
    output reg [4:0] rd_add,
    output reg [4:0] rs1_add,
    output reg [1:0] alu_ctrl
    //output reg [2:0] funct3
    // 还可以根据需要输出更多的控制信号
);

wire [6:0] opcode;
//assign funct3 = instruction[14:12][]
    // 根据opcode设置其他控制信号
assign  opcode = instruction[6:0];
assign  rs1_add = instruction[19:15] ;
assign  rd_add = instruction[11:7];
import "DPI-C" function void set_npctrap(int i);
always @(*) begin
    if(opcode == 7'b1110011)begin
    set_npctrap(1);
    end
end
//auipc指令时ALUsrc为pc+imm
assign ALU_src  = ( opcode == 7'b0010111)                          ? 1 : 0;
assign PC_src   = ((opcode == 7'b1101111)||(opcode == 7'b1100111)) ? 1 : 0;
//ext_type
Extnum_type ext_num_type(.opcode(opcode),
                    .Ext_type(Ext_type));
//Regnum
Reg_Write_num reg_num_type(.opcode(opcode),
                    .RegWrite(RegWrite));

//alu_ctrl_num
alu_ctrl_num ctrl_num_type(.opcode(opcode),
                    .alu_ctrl(alu_ctrl));
endmodule

