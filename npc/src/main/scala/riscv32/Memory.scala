package riscv32

import chisel3._
import chisel3.util._


class Memory  extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val addr   = Input(UInt(32.W))
    val writedata = Input(UInt(32.W))
    val memRead = Input(UInt(1.W))
    val memop    = Input(UInt(4.W))
    val memWrite = Input(UInt(1.W))
    val readData = Output(UInt(32.W))
  })

  setInline("Memory.sv",
    """
       |module Memory (
       |     input logic clock,
       |     input logic [31:0] addr,
       |     input logic [31:0] writedata,
       |     input logic [3:0] memop,
       |     input logic memRead,
       |     input logic memWrite,
       |     output logic [31:0] readData
       | );
       |     logic [31:0] mem_out;
       |     import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
       |     import "DPI-C" function void pmem_write(input int addr, input int data, input int len);
       |
       |     always_ff @(posedge clock) begin
       |         // 处理读操作
       |         unique case ({memRead, memop})
       |             5'b10001: begin // 使用5位二进制表达
       |                 mem_out = pmem_read(addr, 1);
       |                 readData = {{24{mem_out[7]}}, mem_out[7:0]};
       |             end
       |             5'b10010: begin
       |                mem_out = pmem_read(addr, 2);
       |                 readData = {{16{mem_out[15]}}, mem_out[15:0]};
       |             end
       |             5'b10011: begin
       |                 mem_out = pmem_read(addr, 4);
       |                 readData = mem_out;
       |             end
       |             5'b10100: begin
       |                 mem_out = pmem_read(addr, 1);
       |                 readData = {24'b0, mem_out[7:0]};
       |             end
       |             5'b10101: begin
       |                 mem_out = pmem_read(addr, 2);
       |                 readData = {16'b0, mem_out[15:0]};
       |             end
       |             default: begin 
       |                      readData = 32'b0; 
       |                      mem_out = 32'b0;
       |                      end
       |         endcase
       |
       |         // 处理写操作
       |         unique case ({memWrite, memop})
       |             5'b10110: pmem_write(addr, writedata, 1);
       |             5'b10111: pmem_write(addr, writedata, 2);
       |             5'b11000: pmem_write(addr, writedata, 4);
       |             default: ;
       |         endcase
       |     end
       |endmodule     
       |""".stripMargin)


}