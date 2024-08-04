package riscv32

import chisel3._
import chisel3.util._

class PCRegIO extends Bundle{
    val nextpc       = Input(UInt(32.W))
    val pc           = Output(UInt(32.W))
}

class PCReg extends Module {
  val io = IO(new PCRegIO())

  // 使用无符号数表示初始化值
  val regPC = RegInit("h80000000".U(32.W))


  regPC := io.nextpc


  io.pc := regPC
}


  

