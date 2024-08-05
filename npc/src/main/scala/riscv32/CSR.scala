package riscv32

import chisel3._
import chisel3.util._

class CsrIO extends Bundle {
    val irq = Input(UInt(1.W))
    val pc = Input(UInt(32.W))
    val csr_wen = Input(UInt(1.W)) 
    val csr_wdata = Input(UInt(32.W))
    val csr_add  = Input(UInt(2.W))
    val csr_odata = Output(UInt(32.W))
    val mtvec    = Output(UInt(32.W))
    val mepc     = Output(UInt(32.W))
}

class Csr extends Module {
    val io = IO(new CsrIO)

    // 0->msatus 1->mtvec 2->mcause 3->mepc
    val csr_reg = RegInit(VecInit(Seq(
        "h1800".U(32.W), // mstatus初始化为"h1800"
        0.U(32.W),      //  mtvec初始化为0
        0.U(32.W),      //  mcause初始化为0
        0.U(32.W)       //  mepc初始化为0
    )))
    


    when(io.irq === 1.U) {
        csr_reg(2) := "hb".U
        csr_reg(3) := io.pc
    }
    
    when(io.csr_wen === 1.U) {
        csr_reg(io.csr_add) := io.csr_wdata
    }

    io.csr_odata := Mux(io.csr_wen === 1.U, csr_reg(io.csr_add), 0.U) // 根据csr_wen来输出数据
    io.mtvec := csr_reg(1)
    io.mepc := csr_reg(3)

}
