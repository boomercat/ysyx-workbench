module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,//write data
  input [ADDR_WIDTH-1:0] waddr,//write address
  input wen,     
  input [ADDR_WIDTH-1:0] Addr1, //read add
  output [DATA_WIDTH-1:0] RData1 //output the add1's data 

);
import "DPI-C" function void update_regs(int idx,input word_t data);
integer j;
reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0]; //寄存器文件数组
  //write operation
always @(posedge clk) begin
  if (wen && waddr != 0)  rf[waddr] <= wdata;
      //update_regs(waddr, wdata); // 使用正确的变量名
end


always@(*) begin
 for ( j = 0 ; j < 32;j++ ) 
      update_regs(j,rf[j]);    
  end


  //read operation and 0 register
  assign RData1 = (Addr1==0) ? 0 : rf[Addr1];
endmodule
