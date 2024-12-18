package riscv32.idu

import chisel3._
import chisel3.util._
import riscv32.exu.Alu_OP._
import Instructions._
import riscv32._

object Control{
    val Y = true.B
    val N = false.B

    //alu src select 
    
    val SRC1_RS1 = 1.U(2.W)
    val SRC1_PC  = 2.U(2.W)
    val SRC1_X   = 0.U(2.W)

    val SRC2_IMM = 2.U(3.W)
    val SRC2_RS2 = 1.U(3.W)
    val SRC2_4   = 3.U(3.W)
    val SRC2_CSR = 4.U(3.W)
    val SRC2_X   = 0.U(3.W)



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
    val CSR_WRITE  = 3.U(2.W)


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
    val BRANCH_ECALL = 4.U(4.W)
    val BRANCH_MRET = 5.U(4.W)
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

   //csr_type
    val CSR_NO  = 0.U(2.W)
    val CSR_IRQ = 1.U(2.W)
    val CSR_WRT = 2.U(2.W)

    
val default = 
//
//                  
//              src1   src2    imm_sel   alu_op  regster write  Branch Mem_op Csr_type
//               |       |       |        |          |          |        |        |
            List(SRC1_X, SRC2_X, IMM_X, ALU_XXX , NOT_WRITE, BRANCH_X, MEM_NO ,CSR_NO)
  val map = Array(
    AUIPC -> List(SRC1_PC ,SRC2_IMM ,IMM_U ,ALU_ADD ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    LUI   -> List(SRC1_X  ,SRC2_IMM ,IMM_U ,ALU_ADD ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    JAL   -> List(SRC1_PC ,SRC2_4   ,IMM_J ,ALU_ADD ,ALU_WRITE ,BRANCH_JAL,MEM_NO,CSR_NO),
    JALR  -> List(SRC1_PC ,SRC2_4   ,IMM_I ,ALU_ADD ,ALU_WRITE ,BRANCH_JALR,MEM_NO,CSR_NO),
    ADDI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_ADD ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    ADD   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_ADD ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    SUB   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_SUB ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    //compare
    SLTI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_CSS ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    SLTIU -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_CSU ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    SLTU  -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_CSU ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    SLT   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_CSS ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    //logical caculate
    XOR   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_XOR ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    XORI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_XOR ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    AND   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_AND ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    ANDI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_AND ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    OR    -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_OR  ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    ORI   -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_OR  ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    //shift
    SLL   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_LS  ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    SLLI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_LS  ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    SRL   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_RS  ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    SRLI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_RS  ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    SRA   -> List(SRC1_RS1,SRC2_RS2 ,IMM_X ,ALU_RSI ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    SRAI  -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_RSI ,ALU_WRITE ,BRANCH_X,MEM_NO,CSR_NO),
    //branch
    BEQ   -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BEQ ,NOT_WRITE ,BRANCH_BEQ,MEM_NO,CSR_NO),
    BGE   -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BGE ,NOT_WRITE ,BRANCH_BGE,MEM_NO,CSR_NO),
    BGEU  -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BGE ,NOT_WRITE ,BRANCH_BGEU,MEM_NO,CSR_NO),
    BLT   -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BLT ,NOT_WRITE ,BRANCH_BLT,MEM_NO,CSR_NO),
    BLTU  -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BLTU,NOT_WRITE ,BRANCH_BLTU,MEM_NO,CSR_NO),
    BNE   -> List(SRC1_RS1,SRC2_RS2 ,IMM_B ,ALU_BNE ,NOT_WRITE ,BRANCH_BNE,MEM_NO,CSR_NO),
    //memory
    LB    -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_ADD ,MEM_WRITE ,BRANCH_X,MEM_LB,CSR_NO),
    LBU   -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_ADD ,MEM_WRITE ,BRANCH_X,MEM_LBU,CSR_NO),
    LH    -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_ADD ,MEM_WRITE ,BRANCH_X,MEM_LH,CSR_NO),
    LHU   -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_ADD ,MEM_WRITE ,BRANCH_X,MEM_LHU,CSR_NO),
    LW    -> List(SRC1_RS1,SRC2_IMM ,IMM_I ,ALU_ADD ,MEM_WRITE ,BRANCH_X,MEM_LW,CSR_NO),
    SB    -> List(SRC1_RS1,SRC2_IMM ,IMM_S ,ALU_ADD ,NOT_WRITE ,BRANCH_X,MEM_SB,CSR_NO),
    SH    -> List(SRC1_RS1,SRC2_IMM ,IMM_S ,ALU_ADD ,NOT_WRITE ,BRANCH_X,MEM_SH,CSR_NO),
    SW    -> List(SRC1_RS1,SRC2_IMM ,IMM_S ,ALU_ADD ,NOT_WRITE ,BRANCH_X,MEM_SW,CSR_NO),
    //csr 
    ECALL -> List(SRC1_X  ,SRC2_X   ,IMM_X ,ALU_NOP ,NOT_WRITE ,BRANCH_ECALL,MEM_NO,CSR_IRQ),
    CSRRS -> List(SRC1_RS1,SRC2_CSR ,IMM_X ,ALU_OR  ,CSR_WRITE ,BRANCH_X,MEM_NO,CSR_WRT),
    CSRRW -> List(SRC1_RS1,SRC2_X   ,IMM_X ,ALU_ADD ,CSR_WRITE ,BRANCH_X,MEM_NO,CSR_WRT),
    MRET  -> List(SRC1_X  ,SRC2_X   ,IMM_X ,ALU_NOP ,NOT_WRITE ,BRANCH_MRET,MEM_NO,CSR_NO)
  )



}

class ControlSignals extends  Bundle{
    val instruction = Input(UInt(32.W))
    val src1_sel  = Output(UInt(2.W))
    val src2_sel  = Output(UInt(3.W))
    val imm_type  = Output(UInt(3.W))
    val alu_op    = Output(UInt(4.W))
    val reg_write = Output(UInt(2.W))
    val branch    = Output(UInt(3.W))
    val memop     = Output(UInt(4.W))
    val csr_type  = Output(UInt(2.W))
    

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
    io.memop    := ctrlSignals(6)
    io.csr_type := ctrlSignals(7)
}