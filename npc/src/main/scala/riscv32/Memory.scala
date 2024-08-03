package riscv32

import chisel3._
import chisel3.util._


class Memory  extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val addr   = Input(UInt(32.W))
    val writedata = Input(UInt(32.W))
    val memRead = Input(UInt(1.W))
    val memop    = Input(UInt(3.W))
    val memWrite = Input(UInt(1.W))
    val readData = Output(UInt(32.W))
  })

  setInline("Memory.sv",
    s"""
       |module Memory (
       |    input  clock,
       |    input [31:0] addr, 
       |    input [31:0] writedata,
       |    input [3:0] memop,
       |    input memRead,
       |    input memWrite,
       |    Output reg [31:0] readData
       |);
       | reg [31:0] mem_out;
       | import "DPI-C" function int unsigned pmem_read(input int unsigned raddr,int len);
       | import "DPI-C" function void pmem_write (input int addr, input int data, input int len);
       | always @(posedge clock) begin
       |    case({memRead,memop})
       |        4'b10001 : begin
       |            mem_out = pmem_read(addr,1);
       |            readData = {{24{mem_out[7]}},mem_out[7:0]}; 
       |        end
       |        4'b10010 : begin
       |            mem_out = pmem_read(addr,2);
       |            readData =  {{16{mem_out[15]}},mem_out[15:0]};
       |        end
       |        4'b10011 : begin
       |            mem_out = pmem_read(addr,4);
       |            readData = mem_out;
       |        end        
       |        4'b10100 : begin 
       |            mem_out = pmem_read(addr,1);
       |            readData = {24'b0,mem_out[7:0]};
       |        end
       |        4'b10101 : begin
       |            mem_out = pmem_read(addr,2);
       |            readData = {16'b0,mem_out[15:0]};
       |        end
       |        default : readData = 0;
       |     enccase     
       | 
       |     case({memWrite,memop})
       |        4'b10110 :  pmem_write(addr,writedata,1);
       |        4'b10111 :  pmem_write(addr,writedata,2);
       |        4'b11000 :  pmem_write(addr,writedata,4);
       |        default: ;
       |      endcase
       |            
       |endmodule
     """.stripMargin)


}