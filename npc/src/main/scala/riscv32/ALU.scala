package riscv32

import chisel3._
import chisel3.util._

import config.Configs._
import ctrlwire._
import ctrlwire.Alu_ctrl_wire._


object Alu_OP{
  val ALU_NOP = 0.U(4.W)
  val ALU_ADD = 1.U(4.W)
  val ALU_XXX = 0.U(4.W)

}
class AluIO extends Bundle {
  val rs1_data         = Input(UInt(32.W))
  val src1_sel         = Input(UInt(1.W))
  val rs2_data         = Input(UInt(32.W))
  val src2_sel         = Input(UInt(1.W))
  val imm              = Input(UInt(32.W))
  val pc               = Input(UInt(32.W))
  val alu_op           = Input(UInt(4.W))
  val alu_result       = Output(UInt(32.W))


}
import riscv32.Alu_OP._
class ALU extends Module {
  val io = IO(new AluIO()) // 确保 IO 正确初始化

  val src1 = Mux(io.src1_sel === 1.U, io.rs1_data, io.pc)
  val src2 = Mux(io.src2_sel === 1.U, io.rs2_data, io.imm)
  val alu_result = WireDefault(0.U(32.W))
  switch(io.alu_op) {
    is(ALU_NOP) { alu_result := 0.U }
    is(ALU_ADD) { alu_result := src1 + src2 }
    // 添加更多操作符
  }
  io.alu_result := alu_result
}
