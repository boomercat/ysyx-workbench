package riscv32

import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import riscv32.idu._
import riscv32.idu.Control._




    
class IDUIO extends Bundle {
  val instruction = Input(UInt(32.W))
  val clock       = Input(Clock())
  val imm         = Output(UInt(32.W))
  val rs1         = Output(UInt(5.W))
  val rs2         = Output(UInt(5.W))
  val rd          = Output(UInt(5.W))
  val src1_sel    = Output(UInt(2.W))
  val src2_sel    = Output(UInt(3.W))
  val reg_write   = Output(UInt(2.W))
  val alu_op      = Output(UInt(4.W))
  val memop       = Output(UInt(4.W))
  val mem_write   = Output(UInt(1.W))
  val mem_read    = Output(UInt(1.W))
  val branch      = Output(UInt(3.W))
  val irq         = Output(UInt(1.W))
  val csr_wen     = Output(UInt(1.W))
  val csr_add     = Output(UInt(2.W))
  val reg_wen     = Output(UInt(1.W))

}

class IDU extends Module {
  val io         = IO(new IDUIO())
  val controller = Module(new Control())
  val imm_ext    = Module(new IMM())
  val ebreak     = Module(new Ebreak())
  val csr_type   = controller.io.csr_type
  ebreak.io.clock := io.clock
  ebreak.io.instruction := io.instruction
  controller.io.instruction := io.instruction
  io.imm := imm_ext.io.imm
  io.rs1 := io.instruction(19,15)
  io.rs2 := io.instruction(24,20)
  io.rd  := io.instruction(11,7)
  io.src1_sel := controller.io.src1_sel
  io.src2_sel := controller.io.src2_sel
  io.reg_write := controller.io.reg_write
  io.alu_op    := controller.io.alu_op
  io.memop     := controller.io.memop
  io.mem_read  := (io.instruction(6, 0) === "b0000011".U)
  io.mem_write := (io.instruction(6, 0) === "b0100011".U)
  io.branch := controller.io.branch
  io.reg_wen := (io.reg_write =/= NOT_WRITE)

    
  //CSR 
  io.irq     := (csr_type === 1.U)
  io.csr_wen := (csr_type === 2.U)
  io.csr_add := "b00".U
  when(csr_type === 2.U){
    switch(io.instruction(31,20)) {
        is("h300".U) { io.csr_add := "b00".U }
        is("h305".U) { io.csr_add := "b01".U }
        is("h342".U) { io.csr_add := "b10".U }
        is("h341".U) { io.csr_add := "b11".U }
    }
  }
  imm_ext.io.instruction := io.instruction
  imm_ext.io.imm_type := controller.io.imm_type
 

}


