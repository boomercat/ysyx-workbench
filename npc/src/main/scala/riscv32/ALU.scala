package riscv32

import chisel3._
import chisel3.util._
import riscv32.Control._
import config.Configs._


object Alu_OP{
  val ALU_XXX = 0.U(4.W)
  val ALU_NOP = 0.U(4.W)
  val ALU_ADD = 1.U(4.W)
  val ALU_CSU = 2.U(4.W) //compare small unsigned
  val ALU_CSS = 3.U(4.W) 

}
class AluIO extends Bundle {
  val rs1_data         = Input(UInt(32.W))
  val src1_sel         = Input(UInt(2.W))
  val rs2_data         = Input(UInt(32.W))
  val src2_sel         = Input(UInt(2.W))
  val imm              = Input(UInt(32.W))
  val pc               = Input(UInt(32.W))
  val alu_op           = Input(UInt(4.W))
  val alu_result       = Output(UInt(32.W))


}
import riscv32.Alu_OP._
class ALU extends Module {
  val io = IO(new AluIO()) // 确保 IO 正确初始化
  
  val src1 = WireDefault(0.U(32.W))
  val src2 = WireDefault(0.U(32.W))
  val alu_result = WireDefault(0.U(32.W))


  switch(io.src1_sel) {
    is(SRC1_X)   { src1 := 0.U }
    is(SRC1_RS1) { src1 := io.rs1_data }
    is(SRC1_PC)  { src1 := io.pc }
  }

  switch(io.src2_sel){
    is(SRC2_X)   { src2 := 0.U}
    is(SRC2_RS2) { src2 := io.rs2_data}
    is(SRC2_IMM) { src2 := io.imm}
    is(SRC2_4)   { src2 := 4.U}
  }
  
  switch(io.alu_op) {
    is(ALU_NOP) { alu_result := 0.U }
    is(ALU_ADD) { alu_result := src1 + src2 }
    is(ALU_CSS) { alu_result := src1.asSInt < src2.asSInt}
    is(ALU_CSU) { alu_result := Mux((src1 - src2 < 0.U) ,1.U,0.U)}

  }
  io.alu_result := alu_result
}
