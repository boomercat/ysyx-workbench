package riscv32

import chisel3._
import chisel3.util._

import config.Configs._
import ctrlwire._

class RegisterIO extends Bundle {
  val reg_write = Input(UInt(1.W))
  val writedata = Input(UInt(32.W))
  val rs1       = Input(UInt(5.W))
  val rs2       = Input(UInt(5.W))
  val rd        = Input(UInt(5.W))
  val rs1_data  = Output(UInt(32.W))
  val rs2_data  = Output(UInt(32.W))

}

class Register extends Module {
  val io = IO(new RegisterIO())
  
  val regs = Mem(32, UInt(32.W))
  when(io.rs1 === 0.U) {
    io.rs1_data := 0.U
  } .otherwise {
    io.rs1_data := regs(io.rs1)
  }
  
  when(io.rs2 === 0.U) {
    io.rs2_data := 0.U
  } .otherwise {
    io.rs2_data := regs(io.rs2)
  }

  when(io.reg_write=== 1.U && (io.rd =/= 0.U)) {
    regs(io.rd) := io.writedata
  }
}