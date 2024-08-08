package riscv32

import chisel3._
import chisel3.util._
import riscv32.exu._

class EXUIO extends Bundle{
    val rs1_data         = Input(UInt(32.W))
    val src1_sel         = Input(UInt(2.W))
    val rs2_data         = Input(UInt(32.W))
    val src2_sel         = Input(UInt(3.W))
    val imm              = Input(UInt(32.W))
    val pc               = Input(UInt(32.W))
    val csr_odata        = Input(UInt(32.W))
    val alu_op           = Input(UInt(4.W))
    val mtvec      = Input(UInt(32.W))
    val mepc       = Input(UInt(32.W))
    val branch     = Input(UInt(3.W))
    val nextpc     = Output(UInt(32.W))
    val alu_result  = Output(UInt(32.W))

}

class EXU extends Module{
    val io = IO(new EXUIO())
    val alu = Module(new ALU())
    val pcctrl = Module(new BranchCond())

    //alu
    alu.io.imm      := io.imm
    alu.io.pc       := io.pc
    alu.io.src1_sel := io.src1_sel
    alu.io.src2_sel := io.src2_sel
    alu.io.rs1_data := io.rs1_data
    alu.io.rs2_data := io.rs2_data
    alu.io.alu_op   := io.alu_op
    alu.io.csr_odata := io.csr_odata 


    //branch
    pcctrl.io.imm    := io.imm
    pcctrl.io.pc     := io.pc
    pcctrl.io.branch := io.branch
    pcctrl.io.mtvec  := io.mtvec
    pcctrl.io.mepc   := io.mepc
    pcctrl.io.alu_result := alu.io.alu_result
    pcctrl.io.rs1_data   := io.rs1_data

    io.nextpc        := pcctrl.io.nextpc
    io.alu_result    := alu.io.alu_result
}