module Data_memory (
    input [31:0] instruction,
    input [31:0] addr,
    input [31:0] write_data,
    output reg [31:0] mout_data
);

wire [9:0] extend_src;
wire read_valid;
wire write_valid;
wire [7:0] wmask;
reg [31:0] rdata;

assign extend_src  = {instruction[14:12], instruction[6:0]};
assign write_valid = (instruction[6:0] == 7'b0100011) ? 1 : 0;
assign read_valid  = (instruction[6:0] == 7'b0000011) ? 1 : 0;
assign wmask       = (instruction[14:12] == 3'b000) ? 8'b00000001 : 
                     (instruction[14:12] == 3'b001) ? 8'b00000011 : 
                     (instruction[14:12] == 3'b010) ? 8'b00001111 : 8'b00000000;

import "DPI-C" function int unsigned pmem_read(input int unsigned addr);
import "DPI-C" function void pmem_write(
  input int addr, input int write_data, input byte wmask);

always @(*) begin
  if (read_valid) begin
    rdata = pmem_read(addr);
  end else begin
    rdata = 0;
  end
  if (write_valid) begin
    pmem_write(addr, write_data, wmask);
  end
end

MuxKeyWithDefault #(5, 10, 32) i_extnum (mout_data, extend_src, 32'b0, 
{
    10'b0000000011 , {{24{rdata[7]}}, rdata[7:0]},   // lb: sign extend
    10'b1000000011 , {24'b0, rdata[7:0]},            // lbu: zero extend
    10'b0010000011 , {{16{rdata[15]}}, rdata[15:0]}, // lh: sign extend
    10'b1010000011 , {16'b0, rdata[15:0]},           // lhu: zero extend
    10'b0100000011 , rdata                          // lw: no extend
  }
);

endmodule
