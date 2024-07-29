package riscv32

import chisel3._
import chisel3.util._

import config.Configs._

class IFU extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val reset = Input(Bool())
    val clock = Input(Clock())
    val pc = Input(UInt(32.W))
    val instruction = Output(UInt(32.W))
  })

  // 内联 Verilog 代码
  setInline("IFU.sv",
    s"""
       |module IFU (
       |    input  reset,
       |    input  clock,
       |    input [31:0] pc,
       |    output reg [31:0] instruction
       |);
       |import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, int len);
       |always @(posedge clock) begin
       |    if (!reset) begin
       |        instruction <= pmem_read(pc,4);
       |    end
       |end
       |endmodule
     """.stripMargin)
}
