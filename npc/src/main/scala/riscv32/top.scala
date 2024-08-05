package riscv32

import chisel3._
import chisel3.util._

import config.Configs._

class TopIO extends Bundle {
  val pc = Output(UInt(DATA_WIDTH.W))
}

class top extends Module {
  val io = IO(new TopIO)
  val pcctrl = Module(new BranchCond())
  val pcReg = Module(new PCReg())
  val ifu = Module(new IFU())
  val decoder = Module(new IDU())
  val register = Module(new Register())
  val alu = Module(new ALU())
  val controller = Module(new Control())
  val ebreak   = Module(new Ebreak())
  val mem   = Module(new Memory())
  val csr   = Module(new Csr())

  ebreak.io.clock := clock
  ebreak.io.instruction := ifu.io.instruction
  //链接BranchCond
  pcctrl.io.rs1 := register.io.rs1_data
  pcctrl.io.imm := decoder.io.imm
  pcctrl.io.pc  := pcReg.io.pc
  pcctrl.io.branch := controller.io.branch
  pcctrl.io.alu_result := alu.io.alu_result
  pcctrl.io.mepc := csr.io.mepc
  pcctrl.io.mtvec := csr.io.mtvec

  // 连接 IFU
  pcReg.io.nextpc := pcctrl.io.nextpc
  ifu.io.pc := pcReg.io.pc
  ifu.io.clock := clock
  ifu.io.reset := reset


  // 连接 Controller
  controller.io.instruction := ifu.io.instruction


  // 连接 IDU
  decoder.io.imm_type := controller.io.imm_type
  decoder.io.instruction := ifu.io.instruction
  decoder.io.csr_type := controller.io.csr_type


  // 连接寄存器文件
  register.io.rd := decoder.io.rd
  register.io.rs1 := decoder.io.rs1
  register.io.rs2 := decoder.io.rs2
  register.io.reg_write := controller.io.reg_write
  register.io.alu_result := alu.io.alu_result
  register.io.memData := mem.io.readData
  register.io.csr_odata := csr.io.csr_odata

  // 连接 ALU
  alu.io.imm := decoder.io.imm
  alu.io.pc := pcReg.io.pc
  alu.io.src1_sel := controller.io.src1_sel
  alu.io.src2_sel := controller.io.src2_sel
  alu.io.rs1_data := register.io.rs1_data
  alu.io.rs2_data := register.io.rs2_data
  alu.io.alu_op := controller.io.alu_op
  alu.io.csr_odata := csr.io.csr_odata

  //连接mem
  mem.io.clock := clock
  mem.io.memRead := decoder.io.mem_read
  mem.io.memWrite := decoder.io.mem_write
  mem.io.addr  := alu.io.alu_result
  mem.io.memop := controller.io.memop
  mem.io.writedata := register.io.rs2_data

  //csr
  csr.io.pc := ifu.io.pc
  csr.io.irq := decoder.io.irq
  csr.io.csr_add := decoder.io.csr_add
  csr.io.csr_wen := decoder.io.csr_wen
  csr.io.csr_wdata := alu.io.alu_result

  // 输出 PC
  io.pc := pcReg.io.pc
  dontTouch(io.pc)
}
