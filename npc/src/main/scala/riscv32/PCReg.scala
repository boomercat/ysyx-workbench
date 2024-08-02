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

  // 在每个时钟周期递增 PC 值，并处理复位逻辑
  when (reset.asBool) {
    regPC := "h80000000".U
  } .otherwise {
    regPC := io.nextpc
  }

  io.pc := regPC
}


  

