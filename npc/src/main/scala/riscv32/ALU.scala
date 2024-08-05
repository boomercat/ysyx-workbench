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
  val ALU_SUB = 4.U(4.W)
  val ALU_XOR = 5.U(4.W)
  val ALU_AND = 6.U(4.W)
  val ALU_OR  = 7.U(4.W)
  val ALU_LS  = 8.U(4.W)
  val ALU_RS  = 9.U(4.W)
  val ALU_RSI = 10.U(4.W)
  val ALU_BEQ = 11.U(4.W)
  val ALU_BGE = 12.U(4.W)
  val ALU_BGEU= 13.U(4.W)
  val ALU_BLT = 3.U(4.W)
  val ALU_BLTU = 2.U(4.W)
  val ALU_BNE = 14.U(4.W)

}
class AluIO extends Bundle {
  val rs1_data         = Input(UInt(32.W))
  val src1_sel         = Input(UInt(2.W))
  val rs2_data         = Input(UInt(32.W))
  val src2_sel         = Input(UInt(3.W))
  val imm              = Input(UInt(32.W))
  val pc               = Input(UInt(32.W))
  val csr_odata        = Input(UInt(32.W))
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
    is(SRC2_CSR) { src2 := io.csr_odata}
  }
  
  switch(io.alu_op) {
    is(ALU_NOP) { alu_result := 0.U }
    is(ALU_ADD) { alu_result := src1 + src2 }
    is(ALU_CSS) { alu_result := src1.asSInt < src2.asSInt} 
    is(ALU_CSU) { alu_result := src1 < src2}
    is(ALU_SUB) { alu_result := src1 - src2}
    is(ALU_XOR) { alu_result := src1 ^ src2}
    is(ALU_AND) { alu_result := src1 & src2}
    is(ALU_OR)  { alu_result := src1 | src2}
    is(ALU_LS)  { alu_result := src1 << src2(4,0)}
    is(ALU_RS)  { alu_result := src1 >> src2(4,0)}
    is(ALU_RSI) { alu_result := (src1.asSInt >> src2(4, 0)).asUInt } // 算术右移  
    is(ALU_BEQ) { alu_result := src1 === src2}
    is(ALU_BGE) { alu_result := (src1.asSInt >= src2.asSInt).asUInt } // 有符号大于等于
    is(ALU_BGEU){ alu_result := (src1 >= src2).asUInt } // 无符号大于等于
    is(ALU_BNE) { alu_result := src1 =/= src2}
  }
  io.alu_result := alu_result
}
