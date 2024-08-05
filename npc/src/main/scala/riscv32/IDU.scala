package riscv32

import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

class IDUIO extends Bundle {
  val instruction = Input(UInt(32.W))
  val imm_type    = Input(UInt(3.W))
  val csr_type    = Input(UInt(2.W))
  val imm         = Output(UInt(32.W))
  val rs1         = Output(UInt(5.W))
  val rs2         = Output(UInt(5.W))
  val rd          = Output(UInt(5.W))
  val mem_write   = Output(UInt(1.W))
  val mem_read    = Output(UInt(1.W))
  val irq         = Output(UInt(1.W))
  val csr_wen     = Output(UInt(1.W))
  val csr_add     = Output(UInt(2.W))
}

class IDU extends Module {
  val io        = IO(new IDUIO())

  //CSR 
  io.irq     := (io.csr_type === 1.U)
  io.csr_wen := (io.csr_type === 2.U)
  io.csr_add := "b00".U
  when(io.csr_type === 2.U){
    switch(io.instruction(31,20)) {
        is("h300".U) { io.csr_add := "b00".U }
        is("h305".U) { io.csr_add := "b01".U }
        is("h342".U) { io.csr_add := "b10".U }
        is("h341".U) { io.csr_add := "b11".U }
    }
  }

  //IMM
  val imm = WireDefault(0.U(32.W))
  val imm_i = Cat(Fill(20, io.instruction(31)), io.instruction(31, 20))
  val imm_s = Cat(Fill(20, io.instruction(31)), io.instruction(31, 25), io.instruction(11, 7))
  val imm_b = Cat(Fill(20, io.instruction(31)), io.instruction(7), io.instruction(30, 25), io.instruction(11, 8), 0.U(1.W))
  val imm_u = Cat(io.instruction(31, 12), Fill(12, 0.U))
  val imm_j = Cat(Fill(12, io.instruction(31)), io.instruction(31), io.instruction(19, 12), io.instruction(20), io.instruction(30, 21), Fill(1, 0.U))
  
  when(io.imm_type === 1.U) {
    imm := imm_s
  }.elsewhen(io.imm_type === 2.U) {
    imm := imm_b
  }.elsewhen(io.imm_type === 3.U) {
    imm := imm_u
  }.elsewhen(io.imm_type === 4.U) {
    imm := imm_j
  }.elsewhen(io.imm_type === 5.U) {
    imm := imm_i
  }.otherwise{
    imm := 0.U
  }
 
 
  io.rs1 := io.instruction(19,15)
  io.rs2 := io.instruction(24,20)
  io.rd  := io.instruction(11,7)
  io.imm := imm
  io.mem_read  := (io.instruction(6, 0) === "b0000011".U)
  io.mem_write := (io.instruction(6, 0) === "b0100011".U)

}


