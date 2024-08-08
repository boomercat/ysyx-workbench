package riscv32

import chisel3._
import chisel3.util._

import riscv32._
import config.Configs._

class TopIO extends Bundle {
  val pc = Output(UInt(DATA_WIDTH.W))
}

class top extends Module {
  val io = IO(new TopIO)

  val ifu = Module(new IFU())
  val idu = Module(new IDU())
  val exu   = Module(new EXU())
  val register = Module(new Register())
  val mem   = Module(new Memory())
  val csr   = Module(new Csr())
  val wbu   = Module(new WBU())
  //ifu
  ifu.io.nextpc := exu.io.nextpc
  ifu.io.clock := clock
  ifu.io.reset := reset

  //idu
  idu.io.instruction := ifu.io.instruction
  idu.io.clock := clock

  //exu
  exu.io.rs1_data := register.io.rs1_rdata
  exu.io.src1_sel := idu.io.src1_sel
  exu.io.rs2_data := register.io.rs2_rdata
  exu.io.src2_sel := idu.io.src2_sel
  exu.io.imm      := idu.io.imm
  exu.io.pc       := ifu.io.pc
  exu.io.csr_odata := csr.io.csr_odata
  exu.io.alu_op   := idu.io.alu_op
  exu.io.mtvec    := csr.io.mtvec
  exu.io.mepc     := csr.io.mepc
  exu.io.branch   := idu.io.branch


    // reg
  register.io.rd_addr := idu.io.rd
  register.io.rs1_addr := idu.io.rs1
  register.io.rs2_addr := idu.io.rs2
  register.io.reg_wen  := idu.io.reg_wen
  register.io.write_data := wbu.io.reg_wdata



  //mem
  mem.io.clock := clock
  mem.io.memRead := idu.io.mem_read
  mem.io.memWrite := idu.io.mem_write
  mem.io.addr  := exu.io.alu_result
  mem.io.memop := idu.io.memop
  mem.io.writedata := register.io.rs2_rdata

  //csr
  csr.io.pc := ifu.io.pc
  csr.io.irq := idu.io.irq
  csr.io.csr_add := idu.io.csr_add
  csr.io.csr_wen := idu.io.csr_wen
  csr.io.csr_wdata := wbu.io.csr_wdata


    //wbu
  wbu.io.reg_write := idu.io.reg_write
  wbu.io.alu_result := exu.io.alu_result
  wbu.io.memData := mem.io.readData
  wbu.io.csr_odata := csr.io.csr_odata
  wbu.io.csr_wen := idu.io.csr_wen
  io.pc  := ifu.io.pc
}
