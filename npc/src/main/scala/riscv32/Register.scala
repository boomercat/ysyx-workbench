package riscv32

import chisel3._
import chisel3.util._

import config.Configs._

class RegisterIO extends Bundle {
  // val reg_write = Input(UInt(2.W))
  // val alu_result= Input(UInt(32.W))
  // val memData   = Input(UInt(32.W))
  // val csr_odata = Input(UInt(32.W))
  val reg_wen        = Input(UInt(1.W))
  val write_data     = Input(UInt(32.W))
  val rs1_addr       = Input(UInt(5.W))
  val rs2_addr       = Input(UInt(5.W))
  val rd_addr        = Input(UInt(5.W))
  val rs1_rdata      = Output(UInt(32.W))
  val rs2_rdata      = Output(UInt(32.W))
}

class Register extends Module {
  val io = IO(new RegisterIO())

  
  val regs = Mem(32, UInt(32.W))
  io.rs1_rdata := Mux(io.rs1_addr === 0.U, 0.U, regs(io.rs1_addr))

  io.rs2_rdata := Mux(io.rs2_addr === 0.U, 0.U, regs(io.rs2_addr))

  when(io.reg_wen===1.U && (io.rd_addr =/= 0.U)) {
    regs(io.rd_addr) := io.write_data
  }
}