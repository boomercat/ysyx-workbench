package riscv32

import chisel3._
import chisel3.util._
import riscv32.Alu_OP._
import Instructions._

object Control{
    val Y = true.B
    val N = false.B

    //alu src select 
    
    val SRC1_RS1 = 1.U(2.W)
    val SRC1_PC  = 2.U(2.W)
    val SRC1_X   = 0.U(2.W)

    val SRC2_IMM = 2.U(2.W)
    val SRC2_RS2 = 1.U(2.W)
    val SRC2_4   = 3.U(2.W)
    val SRC2_X   = 0.U(2.W)


    //imm type
    val IMM_X    = 0.U(3.W)
    val IMM_S    = 1.U(3.W)
    val IMM_B    = 2.U(3.W)
    val IMM_U    = 3.U(3.W)
    val IMM_J    = 4.U(3.W)
    val IMM_I    = 5.U(3.W)

    //register write or read
    val NOT_WRITE  = 0.U(2.W)
    val ALU_WRITE  = 1.U(2.W)
    val MEM_WRITE  = 2.U(2.W)

    //jump pc
    val BRANCH_X    = 0.U(4.W)
    val BRANCH_JAL  = 1.U(4.W)
    val BRANCH_JALR = 2.U(4.W)
    val BRANCH_BEQ  = 3.U(4.W)
    val BRANCH_BGE  = 3.U(4.W)
    val BRANCH_BGEU = 3.U(4.W)
    val BRANCH_BLTU = 3.U(4.W)
    val BRANCH_BLT  = 3.U(4.W)
    val BRANCH_BNE  = 3.U(4.W)
    //memory 
    val MEM_NO  = 0.U(4.W)
    val MEM_LB  = 1.U(4.W)
    val MEM_LH  = 2.U(4.W)
    val MEM_LW  = 3.U(4.W)
    val MEM_LBU = 4.U(4.W)
    val MEM_LHU = 5.U(4.W)
    val MEM_SB  = 6.U(4.W)
    val MEM_SH  = 7.U(4.W)
    val MEM_SW  = 8.U(4.W)


val default = 
//
//                  
//              src1   src2    imm_sel   alu_op  regster write  Branch Mem_op
//               |       |       |        |          |          |        |
            List(SRC1_X, SRC2_X, IMM_X, ALU_XXX , NOT_WRITE, BRANCH_X, MEM_NO)
  val map = Array(
    AUIPC -> List(SRC1_PC ,SRC2_IMM ,IMM_U ,ALU_ADD ,ALU_WRITE ,BRANCH_X),
    LUI   -> List(SRC1_X  ,SRC2_IMM ,IMM_U ,ALU_ADD ,ALU_WRITE ,BRANCH_X),
    JAL   -> List(SRC1_PC ,SRC2_4   ,IMM_J ,ALU_ADD ,ALU_WRITE ,BRANCH_JAL),
    JALR  -> List(SRC1_PC ,SRC2_4   ,IMM_I ,ALU_ADD ,ALU_WRITE ,BRANCH_JALR),
    ADDI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_ADD ,ALU_WRITE ,BRANCH_X),
    ADD   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_ADD ,ALU_WRITE ,BRANCH_X),
    SUB   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_SUB ,ALU_WRITE ,BRANCH_X),
    //compare
    SLTI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_CSS ,ALU_WRITE ,BRANCH_X),
    SLTIU -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_CSU ,ALU_WRITE ,BRANCH_X),
    SLTU  -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_CSU ,ALU_WRITE ,BRANCH_X),
    SLT   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_CSS ,ALU_WRITE ,BRANCH_X),
    //logical caculate
    XOR   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_XOR ,ALU_WRITE ,BRANCH_X),
    XORI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_XOR ,ALU_WRITE ,BRANCH_X),
    AND   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_AND ,ALU_WRITE ,BRANCH_X),
    ANDI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_AND ,ALU_WRITE ,BRANCH_X),
    OR    -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_OR  ,ALU_WRITE ,BRANCH_X),
    ORI   -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_OR  ,ALU_WRITE ,BRANCH_X),
    //shift
    SLL   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_LS  ,ALU_WRITE ,BRANCH_X),
    SLLI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_LS  ,ALU_WRITE ,BRANCH_X),
    SRL   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_RS  ,ALU_WRITE ,BRANCH_X),
    SRLI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_RS  ,ALU_WRITE ,BRANCH_X),
    SRA   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_RSI ,ALU_WRITE ,BRANCH_X),
    SRAI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_RSI ,ALU_WRITE ,BRANCH_X),
    //branch
    BEQ   -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BEQ ,NOT_WRITE ,BRANCH_BEQ),
    BGE   -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BGE ,NOT_WRITE ,BRANCH_BGE),
    BGEU  -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BGE ,NOT_WRITE ,BRANCH_BGEU),
    BLT   -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BLT ,NOT_WRITE ,BRANCH_BLT),
    BLTU  -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BLTU,NOT_WRITE ,BRANCH_BLTU),
    BNE   -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BNE ,NOT_WRITE ,BRANCH_BNE),
  )



}

class ControlSignals extends  Bundle{
    val instruction = Input(UInt(32.W))
    val src1_sel  = Output(UInt(2.W))
    val src2_sel  = Output(UInt(2.W))
    val imm_type  = Output(UInt(3.W))
    val alu_op    = Output(UInt(4.W))
    val reg_write = Output(UInt(1.W))
    val branch    = Output(UInt(3.W))

}

class Control extends  Module{
    val io  = IO(new ControlSignals)
    val ctrlSignals = ListLookup(io.instruction, Control.default,Control.map)
    
    //control signla for alu
    io.src1_sel := ctrlSignals(0)
    io.src2_sel := ctrlSignals(1)
    
    //control signal for execute
    io.imm_type := ctrlSignals(2)
    io.alu_op   := ctrlSignals(3)
    io.reg_write:= ctrlSignals(4)
    io.branch   := ctrlSignals(5)
}