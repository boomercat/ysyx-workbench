package riscv32

import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import riscv32.idu._
import riscv32.idu.Control._


class IDUIN extends Bundle {
  val instruction = Input(UInt(32.W))
  // Removed clock from here
}

class IDUOUT extends Bundle {
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

class IDUIO extends Bundle {
  val input  = Flipped(Decoupled(new IDUIN()))
  val output = Decoupled(new IDUOUT())
}

class IDU extends Module {
  val io = IO(new IDUIO())

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)

  // 状态机转移逻辑
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.input.valid, s_wait_ready, s_idle),  // 输入有效时转移
    s_wait_ready -> Mux(io.output.ready, s_idle, s_wait_ready)  // 输出准备好时返回空闲
  ))

    // 输出握手信号处理
  io.output.valid := (state === s_wait_ready) && io.input.valid
  io.input.ready := (state === s_idle)
  // 实例化子模块
  val controller = Module(new Control())
  val imm_ext    = Module(new IMM())
  val ebreak     = Module(new Ebreak())

  // 信号连接
  ebreak.io.clock := clock  // 使用模块的默认时钟
  ebreak.io.instruction := io.input.bits.instruction

  controller.io.instruction := io.input.bits.instruction

  imm_ext.io.instruction := io.input.bits.instruction
  imm_ext.io.imm_type := controller.io.imm_type

  // 输出信号连接
  io.output.bits.imm := imm_ext.io.imm
  io.output.bits.rs1 := io.input.bits.instruction(19, 15)
  io.output.bits.rs2 := io.input.bits.instruction(24, 20)
  io.output.bits.rd  := io.input.bits.instruction(11, 7)
  io.output.bits.src1_sel := controller.io.src1_sel
  io.output.bits.src2_sel := controller.io.src2_sel
  io.output.bits.reg_write := controller.io.reg_write
  io.output.bits.alu_op    := controller.io.alu_op
  io.output.bits.memop     := controller.io.memop
  io.output.bits.mem_read  := (io.input.bits.instruction(6, 0) === "b0000011".U)
  io.output.bits.mem_write := (io.input.bits.instruction(6, 0) === "b0100011".U)
  io.output.bits.branch := controller.io.branch

  io.output.bits.reg_wen := (io.output.bits.reg_write =/= NOT_WRITE)

  // CSR 信号处理
  val csr_type = controller.io.csr_type
  io.output.bits.irq     := (csr_type === 1.U)
  io.output.bits.csr_wen := (csr_type === 2.U)
  io.output.bits.csr_add := "b00".U

  when(csr_type === 2.U) {
    switch(io.input.bits.instruction(31, 20)) {
      is("h300".U) { io.output.bits.csr_add := "b00".U }
      is("h305".U) { io.output.bits.csr_add := "b01".U }
      is("h342".U) { io.output.bits.csr_add := "b10".U }
      is("h341".U) { io.output.bits.csr_add := "b11".U }
    }
  }


}
