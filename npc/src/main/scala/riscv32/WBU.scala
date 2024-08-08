package riscv32

import chisel3._
import chisel3.util._
import riscv32.idu.Control._




class WBUIO extends Bundle {
  val reg_write = Input(UInt(2.W))
  val alu_result= Input(UInt(32.W))
  val memData   = Input(UInt(32.W))
  val csr_odata = Input(UInt(32.W))
  val csr_wen  = Input(UInt(1.W))
  val reg_wdata = Output(UInt(32.W))
  val csr_wdata = Output(UInt(32.W))
}

class WBU extends Module{
    val io = IO(new WBUIO())
    io.reg_wdata := 0.U
    io.csr_wdata := 0.U

    switch(io.reg_write){
        is(ALU_WRITE) {io.reg_wdata := io.alu_result}
        is(MEM_WRITE) {io.reg_wdata := io.memData}
        is(CSR_WRITE) {io.reg_wdata := io.csr_odata}
    }
    when(io.csr_wen === 1.U){ io.csr_wdata := io.alu_result}



}