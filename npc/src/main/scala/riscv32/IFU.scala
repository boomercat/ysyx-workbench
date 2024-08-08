package riscv32
import chisel3._
import chisel3.util._
import riscv32.ifu._



class IFUIO extends Bundle{
    val nextpc  = Input(UInt(32.W))
    val reset   = Input(Bool())
    val clock   = Input(Clock())
    val instruction = Output(UInt(32.W))
    val pc      = Output(UInt(32.W))
}

class IFU extends Module{
    val io = IO(new IFUIO())
    val pcReg = Module(new PCReg())
    val insRead = Module(new INSRead())

    pcReg.io.nextpc  := io.nextpc
    insRead.io.pc    := pcReg.io.pc
    insRead.io.reset := io.reset
    insRead.io.clock := io.clock
    io.pc := pcReg.io.pc
    io.instruction := insRead.io.instruction

}