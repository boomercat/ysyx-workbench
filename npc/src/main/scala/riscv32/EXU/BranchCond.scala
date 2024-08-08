package  riscv32.exu
import  chisel3._
import  chisel3.util._
import  riscv32.idu.Control._

class BranchCondIO extends Bundle{
    val branch     = Input(UInt(3.W))
    val alu_result = Input(UInt(32.W))
    val pc         = Input(UInt(32.W))
    val imm        = Input(UInt(32.W))
    val rs1_data   = Input(UInt(32.W))
    val mtvec      = Input(UInt(32.W))
    val mepc       = Input(UInt(32.W))
    val nextpc     = Output(UInt(32.W))
}

class BranchCond extends Module{
    val io = IO(new BranchCondIO())
    // when(reset.asBool){
    //     io.nextpc := "h80000000".U
    // }
    io.nextpc := "h80000000".U
    switch(io.branch){
        is(BRANCH_X)    { io.nextpc := io.pc + 4.U}
        is(BRANCH_JAL)  { io.nextpc := io.pc + io.imm}
        is(BRANCH_JALR) { io.nextpc := io.imm + io.rs1_data}
        is(BRANCH_BEQ)  { io.nextpc := Mux(io.alu_result === 1.U,io.pc+io.imm,io.pc+4.U)}
        is(BRANCH_ECALL){ io.nextpc := io.mtvec}
        is(BRANCH_MRET) { io.nextpc := io.mepc}

    }
}