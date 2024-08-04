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


  ebreak.io.clock := clock
  ebreak.io.instruction := ifu.io.instruction
  //链接BranchCond
  pcctrl.io.rs1 := register.io.rs1_data
  pcctrl.io.imm := decoder.io.imm
  pcctrl.io.pc  := pcReg.io.pc
  pcctrl.io.branch := controller.io.branch
  pcctrl.io.alu_result := alu.io.alu_result


  // 连接 IFU
  pcReg.io.nextpc := pcctrl.io.nextpc
  ifu.io.pc := pcReg.io.pc
  ifu.io.clock := clock
  ifu.io.reset := reset
  // dontTouch(ifu.io.pc)
  // dontTouch(ifu.io.instruction)

  // 连接 Controller
  controller.io.instruction := ifu.io.instruction
  // dontTouch(controller.io.instruction)
  // dontTouch(controller.io.src1_sel)
  // dontTouch(controller.io.src2_sel)
  // dontTouch(controller.io.imm_type)
  // dontTouch(controller.io.alu_op)
  // dontTouch(controller.io.reg_write)

  // 连接 IDU
  decoder.io.imm_type := controller.io.imm_type
  decoder.io.instruction := ifu.io.instruction
  
  // dontTouch(decoder.io.imm_type)
  // dontTouch(decoder.io.instruction)
  // dontTouch(decoder.io.rs1)
  // dontTouch(decoder.io.rs2)
  // dontTouch(decoder.io.rd)
  // dontTouch(decoder.io.imm)

  // 连接寄存器文件
  register.io.rd := decoder.io.rd
  register.io.rs1 := decoder.io.rs1
  register.io.rs2 := decoder.io.rs2
  register.io.reg_write := controller.io.reg_write
  register.io.alu_result := alu.io.alu_result
  register.io.memData := mem.io.readData
  // dontTouch(register.io.rd)
  // dontTouch(register.io.rs1)
  // dontTouch(register.io.rs2)
  // dontTouch(register.io.reg_write)
  // dontTouch(register.io.writedata)
  // dontTouch(register.io.rs1_data)
  // dontTouch(register.io.rs2_data)

  // 连接 ALU
  alu.io.imm := decoder.io.imm
  alu.io.pc := pcReg.io.pc
  alu.io.src1_sel := controller.io.src1_sel
  alu.io.src2_sel := controller.io.src2_sel
  alu.io.rs1_data := register.io.rs1_data
  alu.io.rs2_data := register.io.rs2_data
  alu.io.alu_op := controller.io.alu_op
  // dontTouch(alu.io.imm)
  // dontTouch(alu.io.pc)
  // dontTouch(alu.io.src1_sel)
  // dontTouch(alu.io.src2_sel)
  // dontTouch(alu.io.rs1_data)
  // dontTouch(alu.io.rs2_data)
  // dontTouch(alu.io.alu_op)
  // dontTouch(alu.io.alu_result)

  //连接mem
  mem.io.clock := clock
  mem.io.memRead := decoder.io.mem_read
  mem.io.memWrite := decoder.io.mem_write
  mem.io.addr  := alu.io.alu_result
  mem.io.memop := controller.io.memop
  mem.io.writedata := register.io.rs2_data

  // 输出 PC
  io.pc := pcReg.io.pc
  dontTouch(io.pc)
}
