module IDU(
    input clk,
    input rst,
    input IFU_done,
    input [31:0] instruction,
    output reg [2:0] Ext_type,
    output reg [2:0] RegWrite,
    output reg [2:0] PC_src,
    output reg [4:0] rd_add,
    output reg [4:0] rs1_add,
    output reg [4:0] alu_ctrl,
    output reg [4:0] rs2_add,
    output reg memory_valid,
    output reg IDU_done,
    output [11:0] csr_imm,
    output [31:0] irq_no,
    output reg [6:0] opcode
);


always @(negedge  clk) begin
    if(IFU_done) begin
        opcode <= instruction[6:0];
        IDU_done <= 1;
    end
    else begin
        IDU_done <= 0;
    end
end
assign rs1_add = (opcode != 7'b0110111 && opcode != 7'b0010111 && opcode != 7'b1101111) ? instruction[19:15] : 5'b0;
assign rs2_add = (opcode == 7'b1100011 || opcode == 7'b0100011 || opcode == 7'b0110011) ? instruction[24:20] : 5'b0;

// ebreak 中断机制
import "DPI-C" function void set_npctrap(int i);
always @(*) begin
    if(instruction == 32'b00000000000100000000000001110011) begin
        set_npctrap(1);
    end
end

wire slli_cond = (opcode == 7'b0010011) && (instruction[14:12] == 3'b001) && (instruction[31:26] == 6'b000000) && (instruction[25] != 0);
wire srli_cond = (opcode == 7'b0010011) && (instruction[14:12] == 3'b101) && (instruction[31:26] == 6'b000000) && (instruction[25] != 0);
wire srai_cond = (opcode == 7'b0010011) && (instruction[14:12] == 3'b101) && (instruction[31:26] == 6'b100000) && (instruction[25] != 0);

//slli 判断shamt[5] == 0
import "DPI-C" function void set_npcinv(int i);
always @(*) begin
    if (slli_cond || srli_cond || srai_cond) begin
        set_npcinv(1);
    end
end

always @(posedge clk or negedge clk) begin
    if (opcode == 7'b1100011 || instruction[6:0] == 7'b0100011) begin
        rd_add <= 5'b0;
    end else begin
       if(IFU_done) begin
            rd_add <= instruction[11:7];
        end
    end
end

assign irq_no = (instruction == 32'b00000000000000000000000001110011) ? 32'hb : 0;
assign csr_imm = (opcode == 7'b1110011) ? instruction[31:20] : 0;
assign memory_valid = (opcode == 7'b0000011) ? 1 : 0;


Extnum_type ext_num_inst(.opcode(opcode),.Ext_type(Ext_type));
        // Regnum
Reg_Write_num reg_num_type(.opcode(opcode),.RegWrite(RegWrite));
        // alu_ctrl_num
alu_ctrl_num ctrl_num_type(.clk(clk),.instruction(instruction),.alu_ctrl(alu_ctrl));
        // PC_src_num
PC_src_num PC_src_num_type(.opcode(opcode),.PC_src(PC_src));




endmodule
