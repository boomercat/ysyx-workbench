module alu_ctrl_num(
    input clk,
    input [31:0] instruction,
    output reg [2:0] alu_ctrl
);

wire [14:0] right_inst;
assign  right_inst = instruction[14:0];


always @(posedge clk ) 
begin
  casez (right_inst)
    15'b????????0010111 : alu_ctrl = 3'b000;     //auipc
    15'b????????0110111 : alu_ctrl = 3'b001;    //lui
    15'b????????1101111 : alu_ctrl = 3'b010;     //jal
    15'b000?????1100111 : alu_ctrl = 3'b011;     //jalr
    15'b011?????0010011 : alu_ctrl = 3'b100;     ///sltiu -> x[rd] = (x[rs1] < sext(imm))?1:0
    15'b000?????0010011 : alu_ctrl = 3'b000;      //addi: 
    default: alu_ctrl = 3'b000;
  endcase
  
end

//  MuxKeyWithDefault #(6, 15, 3) i_test (alu_ctrl, right_inst, 3'b000, {
//     15'bxxxxxxxx0010111, 3'b000,     //auipc
//     15'bxxxxxxxx0110111, 3'b001,     //lui
//     15'bxxxxxxxx1101111, 3'b010,     //jal
//     15'b000xxxxx1100111, 3'b011,     //jalr
//     15'b010xxxxx0010011, 3'b100,     ///sltiu -> x[rd] = (x[rs1] < sext(imm))?1:0
//     15'b000xxxxx0010011, 3'b000      //addi
//   });


endmodule