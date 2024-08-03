package riscv32

import chisel3._
import chisel3.util._

import config.Configs._

class RegisterIO extends Bundle {
  val reg_write = Input(UInt(2.W))
  val alu_result = Input(UInt(32.W))
  val memRead   = Input(UInt(32.W))
  val rs1       = Input(UInt(5.W))
  val rs2       = Input(UInt(5.W))
  val rd        = Input(UInt(5.W))
  val rs1_data  = Output(UInt(32.W))
  val rs2_data  = Output(UInt(32.W))

}

class Register extends Module {
  val io = IO(new RegisterIO())
  switch(io.reg_write){
    is(1.U) {io.writedata := io.alu_result}
    is(2.U) {io.writedata := io.memRead}
  }  
  
  val regs = Mem(32, UInt(32.W))
  io.rs1_data := Mux(io.rs1 === 0.U, 0.U, regs(io.rs1))

  io.rs2_data := Mux(io.rs2 === 0.U, 0.U, regs(io.rs2))

  when(io.reg_write === 1.U && (io.rd =/= 0.U)) {
    regs(io.rd) := io.writedata
  }
}