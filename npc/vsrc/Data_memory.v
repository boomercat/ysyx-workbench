module Data_memory(
    input [31:0] instruction,
    input [31:0] addr,
    // input [31:0] write_data,
    input valid,
    // input wen,
    // input [3:0] mask,
    output reg [31:0] mout_data
);

wire [9:0] extend_src;
assign extend_src = {instruction[14:12],instruction[6:0]};

import "DPI-C" function int unsigned pmem_read(input int unsigned addr);
// import "DPI-C" function void pmem_write(
//   input int add, input int write_data, input byte mask);
reg [31:0] rdata;
always @(*) begin
  if (valid) begin // 有读写请求时
    rdata = pmem_read(addr);
    // if (wen) begin // 有写请求时
    //   pmem_write(waddr, wdata, wmask);
    // end
  end
  else begin
    rdata = 0;
  end
end

// always @(*) begin
//     casez (extend_src)
//         10'b0000000011 : mout_data = {{24{rdata[7]}}, rdata[7:0]}; // lb: sign extend
//         10'b1000000011 : mout_data = {24'b0, rdata[7:0]};           // lbu: zero extend
//         10'b0010000011 : mout_data = {{16{rdata[15]}}, rdata[15:0]}; // lh: sign extend
//         10'b1010000011 : mout_data = {16'b0, rdata[15:0]};           // lhu: zero extend
//         10'b0100000011 : mout_data = rdata;                         // lw: no extend
//         default: mout_data = rdata;                                  // default case
//     endcase
// end

 MuxKeyWithDefault #(5, 10, 32) i_extnum (mout_data,  extend_src, 32'b0, {
        10'b0000000011 , {{24{rdata[7]}}, rdata[7:0]}, // lb: sign extend
        10'b1000000011 , {24'b0, rdata[7:0]},           // lbu: zero extend
        10'b0010000011 , {{16{rdata[15]}}, rdata[15:0]}, // lh: sign extend
        10'b1010000011 , {16'b0, rdata[15:0]},           // lhu: zero extend
        10'b0100000011 , rdata                         // lw: no extend
  });




endmodule