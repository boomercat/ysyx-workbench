package riscv32.idu
import chisel3._
import chisel3.util._
import riscv32.idu._

class IMMIO extends Bundle{
    val instruction = Input(UInt(32.W))
    val imm_type    = Input(UInt(3.W))
    val imm         = Output(UInt(32.W))
}


class IMM extends Module{
    val io = IO(new IMMIO())

     //IMM
    val imm_tmp = WireDefault(0.U(32.W))
    val imm_i = Cat(Fill(20, io.instruction(31)), io.instruction(31, 20))
    val imm_s = Cat(Fill(20, io.instruction(31)), io.instruction(31, 25), io.instruction(11, 7))
    val imm_b = Cat(Fill(20, io.instruction(31)), io.instruction(7), io.instruction(30, 25), io.instruction(11, 8), 0.U(1.W))
    val imm_u = Cat(io.instruction(31, 12), Fill(12, 0.U))
    val imm_j = Cat(Fill(12, io.instruction(31)), io.instruction(31), io.instruction(19, 12), io.instruction(20), io.instruction(30, 21), Fill(1, 0.U))
    
    when(io.imm_type === 1.U) {
        imm_tmp := imm_s
    }.elsewhen(io.imm_type === 2.U) {
        imm_tmp := imm_b
    }.elsewhen(io.imm_type === 3.U) {
        imm_tmp := imm_u
    }.elsewhen(io.imm_type === 4.U) {
        imm_tmp := imm_j
    }.elsewhen(io.imm_type === 5.U) {
        imm_tmp := imm_i
    }.otherwise{
        imm_tmp := 0.U
    }

    io.imm := imm_tmp
}