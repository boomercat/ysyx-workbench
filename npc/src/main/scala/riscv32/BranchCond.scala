package  riscv32
import  chisel3._
import  chisel3.util._
import  riscv32.Control._

class BranchCondIO extends Bundle{
    val branch     = Input(UInt(3.W))
    val alu_result = Input(UInt(32.W))
    val pc         = Input(UInt(32.W))
    val imm        = Input(UInt(32.W))
    val rs1        = Input(UInt(32.W))
    val nextpc     = Output(UInt(32.W))
}

class BranchCond extends Module{
    val io = IO(new BranchCondIO())
    io.nextpc := io.pc + 4.U

    switch(io.branch){
        is(BRANCH_X)    { io.nextpc := io.pc + 4.U}
        is(BRANCH_JAL)  { io.nextpc := io.pc + io.imm}
        is(BRANCH_JALR) { io.nextpc := io.imm + io.rs1}
        
    }
}