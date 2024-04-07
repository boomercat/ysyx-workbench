module RegisterFile #(ADDR_WIDTH = 32, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,//write data
  input [ADDR_WIDTH-1:0] waddr,//write address
  input wen,     
  input [ADDR_WIDTH-1:0] Addr1, //read add
  output [DATA_WIDTH-1:0] RData1 //output the add1's data 

);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0]; //寄存器文件数组
  //write operation
  always @(posedge clk) begin
    if (wen && (waddr!=0)) rf[waddr] <= wdata;
  end

  //read operation and 0 register
  assign RData1 = (Addr1==0) ? 0 : rf[Addr1];
endmodule
