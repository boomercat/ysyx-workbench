module alu_ctrl_num(
    input clk,
    input [31:0] instruction,
    output reg [4:0] alu_ctrl
);


always @(posedge clk or negedge clk) 
begin
  casez (instruction)
    32'b????????????_?????_???_?????_0010111 : alu_ctrl = 5'b00000;     //auipc
    32'b????????????_?????_000_?????_0000011 : alu_ctrl = 5'b00000;     //lb
    32'b????????????_?????_001_?????_0000011 : alu_ctrl = 5'b00000;     //lh
    32'b????????????_?????_010_?????_0000011 : alu_ctrl = 5'b00000;     //lw
    32'b0000000?????_?????_000_?????_0110011 : alu_ctrl = 5'b00000;     //add
    32'b????????????_?????_000_?????_0010011 : alu_ctrl = 5'b00000;      //addi 
    32'b????????????_?????_???_?????_0110111 : alu_ctrl = 5'b00001;    //lui
    32'b????????????_?????_???_?????_1101111 : alu_ctrl = 5'b00000;     //jal   从010->000
    32'b0100000?????_?????_000_?????_0110011 : alu_ctrl = 5'b00010;     //sub
    32'b????????????_?????_000_?????_1100111 : alu_ctrl = 5'b00011;     //jalr
    32'b0000000?????_?????_011_?????_0110011 : alu_ctrl = 5'b00100;      //sltu  和sltiu共用一个
    32'b????????????_?????_011_?????_0010011 : alu_ctrl = 5'b00100;     ///sltiu -> x[rd] = (x[rs1] < sext(imm))?1:0
    32'b0000000?????_?????_100_?????_0110011 : alu_ctrl = 5'b00101;      //xor  ->xori共用
    32'b????????????_?????_100_?????_0010011 : alu_ctrl = 5'b00101;      //xori
    32'b0000000?????_?????_110_?????_0110011 : alu_ctrl = 5'b00110;      //or 跟o ri共用
    32'b????????????_?????_110_?????_0010011 : alu_ctrl = 5'b00110;      //ori
    32'b0000000?????_?????_111_?????_0110011 : alu_ctrl = 5'b00111;      //and  跟addi共用一个
    32'b????????????_?????_111_?????_0010011 : alu_ctrl = 5'b00111;      //andi
    32'b0000000?????_?????_001_?????_0110011 : alu_ctrl = 5'b01000;      //sll    
    32'b0000000?????_?????_001_?????_0010011 : alu_ctrl = 5'b10011;      //slli
    32'b0000000?????_?????_101_?????_0110011 : alu_ctrl = 5'b01010;      //srl
    32'b0000000?????_?????_101_?????_0010011 : alu_ctrl = 5'b10101;      //srli
    32'b0100000?????_?????_101_?????_0110011 : alu_ctrl = 5'b01001;      //sra    和srai共用一个
    32'b010000??????_?????_101_?????_0010011 : alu_ctrl = 5'b10100;      //srai
    32'b????????????_?????_010_?????_0010011 : alu_ctrl = 5'b01100;      //slti ->有符号扩展
    32'b0000000?????_?????_010_?????_0110011 : alu_ctrl = 5'b01100;      //slt   有符号
    32'b????????????_?????_000_?????_0100011 : alu_ctrl = 5'b00000;      //sb
    32'b????????????_?????_001_?????_0100011 : alu_ctrl = 5'b00000;      //sh
    32'b????????????_?????_010_?????_0100011 : alu_ctrl = 5'b00000;      //sw
    32'b????????????_?????_000_?????_1100011 : alu_ctrl = 5'b01101;         //beq
    32'b????????????_?????_001_?????_1100011 : alu_ctrl = 5'b10010;      //bne
    32'b????????????_?????_100_?????_1100011 : alu_ctrl = 5'b10000;      //blt
    32'b????????????_?????_101_?????_1100011 : alu_ctrl = 5'b01110;      //bge
    32'b????????????_?????_110_?????_1100011 : alu_ctrl = 5'b10001;      //bltu
    32'b????????????_?????_111_?????_1100011 : alu_ctrl = 5'b01111;      //bgeu
    32'b????????????_?????_010_?????_1110011 : alu_ctrl = 5'b10110;      //cssrs
    32'b????????????_?????_001_?????_1110011 : alu_ctrl = 5'b10111;      //cssrw
    default: alu_ctrl = 5'b00000;
  endcase
  
end


endmodule