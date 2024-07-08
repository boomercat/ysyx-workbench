// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[4U] 
        = (0x100000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[8U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[6U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[5U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->alu_result 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[6U] 
        = vlSelf->pc;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[8U] 
        = vlSelf->pc;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[6U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->alu_result + vlSelf->pc);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                       == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__RegWrite) == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->rd_data = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out
                        : 0U);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__src1_data = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                       == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
           == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->next_pc = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out
                        : 0x80000000U);
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__IDU_done = vlSelf->top__DOT__IDU_done;
    if (vlSelf->rst) {
        vlSelf->__Vdly__top__DOT__IDU_done = 0U;
    }
    if (vlSelf->top__DOT__IFU_done) {
        vlSelf->__Vdly__top__DOT__IDU_done = 1U;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__reg_file__DOT__rf__v0;
    __Vdlyvval__top__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__csrregister__DOT__csr_register__v0;
    __Vdlyvdim0__top__DOT__csrregister__DOT__csr_register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v0;
    __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__csrregister__DOT__csr_register__v0;
    __Vdlyvset__top__DOT__csrregister__DOT__csr_register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v1;
    __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__csrregister__DOT__csr_register__v1;
    __Vdlyvset__top__DOT__csrregister__DOT__csr_register__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v2;
    __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v2 = 0;
    // Body
    if (vlSelf->top__DOT__memory_1__DOT__write_valid) {
        if ((0U == (7U & (vlSelf->top__DOT__instruction 
                          >> 0xcU)))) {
            Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_write_TOP(vlSelf->alu_result, vlSelf->top__DOT__rs2_data, 1U);
        } else if ((1U == (7U & (vlSelf->top__DOT__instruction 
                                 >> 0xcU)))) {
            Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_write_TOP(vlSelf->alu_result, vlSelf->top__DOT__rs2_data, 2U);
        } else if ((2U == (7U & (vlSelf->top__DOT__instruction 
                                 >> 0xcU)))) {
            Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_write_TOP(vlSelf->alu_result, vlSelf->top__DOT__rs2_data, 4U);
        }
    }
    __Vdlyvset__top__DOT__csrregister__DOT__csr_register__v0 = 0U;
    __Vdlyvset__top__DOT__csrregister__DOT__csr_register__v1 = 0U;
    __Vdlyvset__top__DOT__reg_file__DOT__rf__v0 = 0U;
    if (((0x73U == (0x7fU & vlSelf->top__DOT__instruction)) 
         & ((2U == (7U & (vlSelf->top__DOT__instruction 
                          >> 0xcU))) | (1U == (7U & 
                                               (vlSelf->top__DOT__instruction 
                                                >> 0xcU)))))) {
        __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v0 
            = vlSelf->alu_result;
        __Vdlyvset__top__DOT__csrregister__DOT__csr_register__v0 = 1U;
        __Vdlyvdim0__top__DOT__csrregister__DOT__csr_register__v0 
            = vlSelf->top__DOT__csrregister__DOT__waddr_in;
    }
    if ((0x73U == vlSelf->top__DOT__instruction)) {
        __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v1 
            = ((0x73U == vlSelf->top__DOT__instruction)
                ? 0xbU : 0U);
        __Vdlyvset__top__DOT__csrregister__DOT__csr_register__v1 = 1U;
        __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v2 
            = vlSelf->pc;
    }
    if (((IData)(vlSelf->wen) & (0U != (IData)(vlSelf->top__DOT__rd_add)))) {
        __Vdlyvval__top__DOT__reg_file__DOT__rf__v0 
            = vlSelf->rd_data;
        __Vdlyvset__top__DOT__reg_file__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0 
            = vlSelf->top__DOT__rd_add;
    }
    if (__Vdlyvset__top__DOT__csrregister__DOT__csr_register__v0) {
        vlSelf->top__DOT__csrregister__DOT__csr_register[__Vdlyvdim0__top__DOT__csrregister__DOT__csr_register__v0] 
            = __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v0;
    }
    if (__Vdlyvset__top__DOT__csrregister__DOT__csr_register__v1) {
        vlSelf->top__DOT__csrregister__DOT__csr_register[2U] 
            = __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v1;
        vlSelf->top__DOT__csrregister__DOT__csr_register[3U] 
            = __Vdlyvval__top__DOT__csrregister__DOT__csr_register__v2;
    }
    if (__Vdlyvset__top__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__reg_file__DOT__rf__v0;
    }
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->top__DOT__csrregister__DOT__csr_register
                                            [3U])));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->top__DOT__csrregister__DOT__csr_register
                                            [1U])));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__csrregister__DOT__csr_register
        [3U];
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__csrregister__DOT__csr_register
        [1U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__alu_ctrl = (((((((((0x17U == 
                                          (0x7fU & vlSelf->top__DOT__instruction)) 
                                         | (3U == (0x707fU 
                                                   & vlSelf->top__DOT__instruction))) 
                                        | (0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instruction))) 
                                       | (0x2003U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__instruction))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction))) 
                                     | (0x13U == (0x707fU 
                                                  & vlSelf->top__DOT__instruction))) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->top__DOT__instruction))) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__instruction)))
                                   ? ((0x17U == (0x7fU 
                                                 & vlSelf->top__DOT__instruction))
                                       ? 0U : ((3U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__instruction))
                                                ? 0U
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__instruction))
                                                    ? 0U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__instruction))
                                                     ? 0U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__instruction))
                                                      ? 0U
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__instruction))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__instruction))
                                                        ? 1U
                                                        : 0U)))))))
                                   : (((((((((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__instruction)) 
                                             | (0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__instruction))) 
                                            | (0x3033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction))) 
                                           | (0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instruction))) 
                                          | (0x4033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__instruction))) 
                                         | (0x4013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__instruction))) 
                                        | (0x6033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__instruction))) 
                                       | (0x6013U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__instruction)))
                                       ? ((0x40000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__instruction))
                                           ? 2U : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__instruction))
                                                    ? 3U
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__instruction))
                                                     ? 4U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__instruction))
                                                      ? 4U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__instruction))
                                                       ? 5U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__instruction))
                                                        ? 5U
                                                        : 6U))))))
                                       : (((((((((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction)) 
                                                 | (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__instruction))) 
                                                | (0x1033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__instruction))) 
                                               | (0x1013U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction))) 
                                              | (0x5033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__instruction))) 
                                             | (0x5013U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__instruction))) 
                                            | (0x40005033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction))) 
                                           | (0x40005013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->top__DOT__instruction)))
                                           ? ((0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction))
                                               ? 7U
                                               : ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__instruction))
                                                   ? 7U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__instruction))
                                                    ? 8U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__instruction))
                                                     ? 0x13U
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__instruction))
                                                      ? 0xaU
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__instruction))
                                                       ? 0x15U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__instruction))
                                                        ? 9U
                                                        : 0x14U)))))))
                                           : ((((((
                                                   (((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__instruction)) 
                                                     | (0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__instruction))) 
                                                    | (0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__instruction))) 
                                                   | (0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__instruction))) 
                                                  | (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__instruction))) 
                                                 | (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__instruction))) 
                                                | (0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__instruction))) 
                                               | (0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__instruction)))
                                               ? ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__instruction))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__instruction))
                                                    ? 0xcU
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__instruction))
                                                     ? 0U
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__instruction))
                                                      ? 0U
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__instruction))
                                                       ? 0U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__instruction))
                                                        ? 0xdU
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__instruction))
                                                         ? 0x12U
                                                         : 0x10U)))))))
                                               : ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__instruction))
                                                   ? 0xeU
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__instruction))
                                                    ? 0x11U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__instruction))
                                                     ? 0xfU
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__instruction))
                                                      ? 0x16U
                                                      : 
                                                     ((0x1073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__instruction))
                                                       ? 0x17U
                                                       : 0U)))))))));
    if (vlSelf->top__DOT__IDU_done) {
        vlSelf->alu_result = ((0x10U & (IData)(vlSelf->top__DOT__alu_ctrl))
                               ? ((8U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                   ? (vlSelf->top__DOT__src1_data 
                                      + vlSelf->top__DOT__src2_data)
                                   : ((4U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                       ? ((2U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                           ? ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? vlSelf->top__DOT__src1_data
                                               : (vlSelf->top__DOT__src1_data 
                                                  | vlSelf->top__DOT__odata))
                                           : ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? (vlSelf->top__DOT__src1_data 
                                                  >> 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0x14U)))
                                               : VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__src1_data, 
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__instruction 
                                                                    >> 0x14U)))))
                                       : ((2U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                           ? ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? (vlSelf->top__DOT__src1_data 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0x14U)))
                                               : ((vlSelf->top__DOT__src1_data 
                                                   != vlSelf->top__DOT__src2_data)
                                                   ? 1U
                                                   : 0U))
                                           : ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? ((vlSelf->top__DOT__src1_data 
                                                   < vlSelf->top__DOT__src2_data)
                                                   ? 1U
                                                   : 0U)
                                               : (VL_LTS_III(32, vlSelf->top__DOT__src1_data, vlSelf->top__DOT__src2_data)
                                                   ? 1U
                                                   : 0U)))))
                               : ((8U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                   ? ((4U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                       ? ((2U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                           ? ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? ((vlSelf->top__DOT__src1_data 
                                                   >= vlSelf->top__DOT__src2_data)
                                                   ? 1U
                                                   : 0U)
                                               : (VL_GTES_III(32, vlSelf->top__DOT__src1_data, vlSelf->top__DOT__src2_data)
                                                   ? 1U
                                                   : 0U))
                                           : ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? ((vlSelf->top__DOT__src1_data 
                                                   == vlSelf->top__DOT__src2_data)
                                                   ? 1U
                                                   : 0U)
                                               : (VL_LTS_III(32, vlSelf->top__DOT__src1_data, vlSelf->top__DOT__src2_data)
                                                   ? 1U
                                                   : 0U)))
                                       : ((2U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                           ? ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? (vlSelf->top__DOT__src1_data 
                                                  + vlSelf->top__DOT__src2_data)
                                               : (vlSelf->top__DOT__src1_data 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__src2_data)))
                                           : ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__src1_data, 
                                                                (0x1fU 
                                                                 & vlSelf->top__DOT__src2_data))
                                               : (vlSelf->top__DOT__src1_data 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__src2_data)))))
                                   : ((4U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                       ? ((2U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                           ? ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? (vlSelf->top__DOT__src1_data 
                                                  & vlSelf->top__DOT__src2_data)
                                               : (vlSelf->top__DOT__src1_data 
                                                  | vlSelf->top__DOT__src2_data))
                                           : ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? (vlSelf->top__DOT__src1_data 
                                                  ^ vlSelf->top__DOT__src2_data)
                                               : ((vlSelf->top__DOT__src1_data 
                                                   < vlSelf->top__DOT__src2_data)
                                                   ? 1U
                                                   : 0U)))
                                       : ((2U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                           ? ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? (0xfffffffeU 
                                                  & (vlSelf->top__DOT__src1_data 
                                                     + vlSelf->top__DOT__src2_data))
                                               : (vlSelf->top__DOT__src1_data 
                                                  - vlSelf->top__DOT__src2_data))
                                           : ((1U & (IData)(vlSelf->top__DOT__alu_ctrl))
                                               ? vlSelf->top__DOT__src2_data
                                               : (vlSelf->top__DOT__src1_data 
                                                  + vlSelf->top__DOT__src2_data))))));
    }
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[4U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[5U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->alu_result 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[4U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->alu_result + vlSelf->pc);
    if (((0x63U == (IData)(vlSelf->top__DOT__opcode)) 
         | (0x23U == (0x7fU & vlSelf->top__DOT__instruction)))) {
        vlSelf->top__DOT__rd_add = 0U;
    } else if (vlSelf->top__DOT__IFU_done) {
        vlSelf->top__DOT__rd_add = (0x1fU & (vlSelf->top__DOT__instruction 
                                             >> 7U));
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout;
    __Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__memory_1__DOT__pmem_read__4__Vfuncout;
    __Vfunc_top__DOT__memory_1__DOT__pmem_read__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__memory_1__DOT__pmem_read__5__Vfuncout;
    __Vfunc_top__DOT__memory_1__DOT__pmem_read__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__memory_1__DOT__pmem_read__6__Vfuncout;
    __Vfunc_top__DOT__memory_1__DOT__pmem_read__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__memory_1__DOT__pmem_read__7__Vfuncout;
    __Vfunc_top__DOT__memory_1__DOT__pmem_read__7__Vfuncout = 0;
    // Body
    if (vlSelf->top__DOT__memory_1__DOT__read_valid) {
        if ((0x4000U & vlSelf->top__DOT__instruction)) {
            if ((0x2000U & vlSelf->top__DOT__instruction)) {
                vlSelf->top__DOT__memory_out_data = 0U;
            } else if ((0x1000U & vlSelf->top__DOT__instruction)) {
                Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(vlSelf->alu_result, 2U, __Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout);
                vlSelf->top__DOT__memory_1__DOT__mem_out 
                    = __Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout;
                vlSelf->top__DOT__memory_out_data = 
                    (0xffffU & vlSelf->top__DOT__memory_1__DOT__mem_out);
            } else {
                Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(vlSelf->alu_result, 1U, __Vfunc_top__DOT__memory_1__DOT__pmem_read__4__Vfuncout);
                vlSelf->top__DOT__memory_1__DOT__mem_out 
                    = __Vfunc_top__DOT__memory_1__DOT__pmem_read__4__Vfuncout;
                vlSelf->top__DOT__memory_out_data = 
                    (0xffU & vlSelf->top__DOT__memory_1__DOT__mem_out);
            }
        } else if ((0x2000U & vlSelf->top__DOT__instruction)) {
            if ((0x1000U & vlSelf->top__DOT__instruction)) {
                vlSelf->top__DOT__memory_out_data = 0U;
            } else {
                Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(vlSelf->alu_result, 4U, __Vfunc_top__DOT__memory_1__DOT__pmem_read__5__Vfuncout);
                vlSelf->top__DOT__memory_1__DOT__mem_out 
                    = __Vfunc_top__DOT__memory_1__DOT__pmem_read__5__Vfuncout;
                vlSelf->top__DOT__memory_out_data = vlSelf->top__DOT__memory_1__DOT__mem_out;
            }
        } else if ((0x1000U & vlSelf->top__DOT__instruction)) {
            Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(vlSelf->alu_result, 2U, __Vfunc_top__DOT__memory_1__DOT__pmem_read__6__Vfuncout);
            vlSelf->top__DOT__memory_1__DOT__mem_out 
                = __Vfunc_top__DOT__memory_1__DOT__pmem_read__6__Vfuncout;
            vlSelf->top__DOT__memory_out_data = (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__memory_1__DOT__mem_out 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->top__DOT__memory_1__DOT__mem_out));
        } else {
            Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(vlSelf->alu_result, 1U, __Vfunc_top__DOT__memory_1__DOT__pmem_read__7__Vfuncout);
            vlSelf->top__DOT__memory_1__DOT__mem_out 
                = __Vfunc_top__DOT__memory_1__DOT__pmem_read__7__Vfuncout;
            vlSelf->top__DOT__memory_out_data = (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__memory_1__DOT__mem_out 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__memory_1__DOT__mem_out));
        }
    } else {
        vlSelf->top__DOT__memory_out_data = 0U;
    }
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->top__DOT__memory_out_data));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__memory_out_data;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__opcode = 0U;
    }
    if (vlSelf->top__DOT__IFU_done) {
        vlSelf->top__DOT__opcode = (0x7fU & vlSelf->top__DOT__instruction);
    }
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__RegWrite = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out)
                                   : 7U);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__PC_src = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit)
                                 ? (IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out)
                                 : 0U);
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__Ext_type = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out)
                                   : 0U);
}

void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP(IData/*31:0*/ i);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout;
    __Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout = 0;
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__IFU_done = 0U;
    } else if (vlSelf->top__DOT__ALU_done) {
        Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(vlSelf->pc, 4U, __Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout);
        vlSelf->top__DOT__instruction = __Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout;
        vlSelf->top__DOT__IFU_done = 1U;
    } else {
        vlSelf->top__DOT__IFU_done = 0U;
    }
    vlSelf->top__DOT__ALU_done = vlSelf->top__DOT__IDU_done;
    if ((0x100073U == vlSelf->top__DOT__instruction)) {
        Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP(1U);
    }
    vlSelf->top__DOT__memory_1__DOT__read_valid = (3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__instruction));
    vlSelf->top__DOT__memory_1__DOT__write_valid = 
        (0x23U == (0x7fU & vlSelf->top__DOT__instruction));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->top__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0xdU) 
                                             | ((0x1000U 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__instruction 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->top__DOT__instruction 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->top__DOT__instruction 
                                                            >> 7U)))))))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->top__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__instruction 
                                                >> 0x14U)))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->top__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->top__DOT__instruction) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__instruction 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__instruction 
                                                         >> 0x14U))))))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->top__DOT__instruction))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((((- (IData)((vlSelf->top__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->top__DOT__instruction 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__instruction 
                                            >> 7U))))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->top__DOT__instruction 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__instruction 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->top__DOT__instruction 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->top__DOT__instruction 
                                                            >> 7U))))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->top__DOT__instruction 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__instruction 
                                                >> 0x14U));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->top__DOT__instruction 
                        >> 0x1fU))) << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__instruction) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__instruction 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__instruction 
                                                          >> 0x14U)))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3U] 
        = (0xfffff000U & vlSelf->top__DOT__instruction);
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->top__DOT__instruction 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 7U))));
}

void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npcinv_TOP(IData/*31:0*/ i);

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if ((((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
          & (IData)((0x2001000U == (0xfe007000U & vlSelf->top__DOT__instruction)))) 
         | ((IData)(((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
                     & (0x2005000U == (0xfe007000U 
                                       & vlSelf->top__DOT__instruction)))) 
            | (IData)(((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
                       & (0x82005000U == (0xfe007000U 
                                          & vlSelf->top__DOT__instruction))))))) {
        Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npcinv_TOP(1U);
    }
    vlSelf->top__DOT__add_pc__DOT__next_pc_type = (
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__PC_src)) 
                                                    & (1U 
                                                       == vlSelf->alu_result))
                                                    ? 3U
                                                    : 
                                                   (((3U 
                                                      == (IData)(vlSelf->top__DOT__PC_src)) 
                                                     & (0U 
                                                        == vlSelf->alu_result))
                                                     ? 0U
                                                     : 
                                                    ((0x73U 
                                                      == vlSelf->top__DOT__instruction)
                                                      ? 5U
                                                      : 
                                                     ((0x30200073U 
                                                       == vlSelf->top__DOT__instruction)
                                                       ? 6U
                                                       : (IData)(vlSelf->top__DOT__PC_src)))));
    vlSelf->top__DOT__csr_imm = ((0x73U == (IData)(vlSelf->top__DOT__opcode))
                                  ? (vlSelf->top__DOT__instruction 
                                     >> 0x14U) : 0U);
    vlSelf->top__DOT__rs2_add = (((0x63U == (IData)(vlSelf->top__DOT__opcode)) 
                                  | ((0x23U == (IData)(vlSelf->top__DOT__opcode)) 
                                     | (0x33U == (IData)(vlSelf->top__DOT__opcode))))
                                  ? (0x1fU & (vlSelf->top__DOT__instruction 
                                              >> 0x14U))
                                  : 0U);
    vlSelf->top__DOT__rs1_add = (((0x37U != (IData)(vlSelf->top__DOT__opcode)) 
                                  & ((0x17U != (IData)(vlSelf->top__DOT__opcode)) 
                                     & (0x6fU != (IData)(vlSelf->top__DOT__opcode))))
                                  ? (0x1fU & (vlSelf->top__DOT__instruction 
                                              >> 0xfU))
                                  : 0U);
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                       == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Ext_type) == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                          == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Ext_type) == 
              vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                          == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Ext_type) == 
              vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                          == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Ext_type) == 
              vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                          == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Ext_type) == 
              vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ext_imm = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit)
                                  ? vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out
                                  : 0U);
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                       == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr_imm) == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_in = 
        ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out)
          : 0U);
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                       == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr_imm) == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_in = 
        ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out)
          : 0U);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[2U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[5U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[8U] 
        = (0x3700000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[5U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[7U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[8U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__IDU_done = vlSelf->__Vdly__top__DOT__IDU_done;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    if ((0U == (IData)(vlSelf->top__DOT__rs2_add))) {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4U] = 0U;
        vlSelf->top__DOT__rs2_data = 0U;
    } else {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs2_add];
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs2_add];
        vlSelf->top__DOT__rs2_data = vlSelf->top__DOT__reg_file__DOT__rf
            [vlSelf->top__DOT__rs2_add];
    }
    if ((0U == (IData)(vlSelf->top__DOT__rs1_add))) {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7U] = 0U;
        vlSelf->top__DOT__rs1_data = 0U;
    } else {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__rs1_data = vlSelf->top__DOT__reg_file__DOT__rf
            [vlSelf->top__DOT__rs1_add];
    }
    vlSelf->top__DOT__odata = vlSelf->top__DOT__csrregister__DOT__csr_register
        [vlSelf->top__DOT__csrregister__DOT__raddr_in];
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__csrregister__DOT__csr_register
        [vlSelf->top__DOT__csrregister__DOT__raddr_in];
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                       == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
           == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->next_pc = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out
                        : 0x80000000U);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__src2_data = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs2_data)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[4U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs2_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__src1_data = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0U] 
        = (0x7300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[2U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[3U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[5U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[7U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__odata)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                       == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__RegWrite) == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->rd_data = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out
                        : 0U);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
          | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/white/ysyx-workbench/npc/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/white/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/white/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
}
#endif  // VL_DEBUG
