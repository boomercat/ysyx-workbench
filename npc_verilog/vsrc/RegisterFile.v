module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [6:0] opcode,
  input [DATA_WIDTH-1:0] wdata,//write data
  input [ADDR_WIDTH-1:0] waddr,//write address
  input wen,     
  input [ADDR_WIDTH-1:0] Addr1, //read add1
  output [DATA_WIDTH-1:0] RData1, //output the add1's data 
  input [ADDR_WIDTH-1:0] Addr2,
  output [DATA_WIDTH-1:0] RData2
);
reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0]; //寄存器文件数组

always @(posedge clk) begin
  if (wen && waddr != 0)  rf[waddr] <= wdata;
end

  //read operation and 0 register
assign RData1 = (Addr1==0) ? 0 : rf[Addr1];
assign RData2 = (Addr2==0) ? 0 : rf[Addr2];




endmodule
