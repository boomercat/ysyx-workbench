// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP(IData/*31:0*/ i);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((0x73U == (0x7fU & vlSelf->instruction))) {
        Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP(1U);
    }
    vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->instruction 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->instruction 
                                                >> 0x14U)))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->instruction 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->instruction) 
                                                | ((0x800U 
                                                    & (vlSelf->instruction 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->instruction 
                                                         >> 0x14U))))))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->instruction))));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->instruction) 
                       == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__RegWrite = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->instruction) 
                       == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__PC_src = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit)
                                 ? (IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out)
                                 : 0U);
    vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->instruction) 
                       == vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__alu_ctrl = ((IData)(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    if ((0U == (0x1fU & (vlSelf->instruction >> 0xfU)))) {
        vlSelf->top__DOT__rs1_data = 0U;
        vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->top__DOT__rs1_data = vlSelf->top__DOT__reg_file__DOT__rf
            [(0x1fU & (vlSelf->instruction >> 0xfU))];
        vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[(0x1fU 
                                                   & (vlSelf->instruction 
                                                      >> 0xfU))];
    }
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->instruction >> 0x1fU))) 
            << 0xcU) | (vlSelf->instruction >> 0x14U));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->instruction >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->instruction) 
                         | ((0x800U & (vlSelf->instruction 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->instruction 
                                                     >> 0x14U)))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2U] 
        = (0xfffff000U & vlSelf->instruction);
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->instruction) 
                       == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->instruction) == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__Ext_type = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->top__DOT__rs1_data));
    vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x17U == (0x7fU & vlSelf->instruction)) 
                       == vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__test_1__DOT__i0__DOT__hit = (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->instruction)) 
                                                   == 
                                                   vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x17U == (0x7fU & vlSelf->instruction)) 
                          == vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__test_1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit) 
                                                   | ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->instruction)) 
                                                      == 
                                                      vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->top__DOT__out_data1 = ((IData)(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out
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
    vlSelf->top__DOT__ext_imm = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit)
                                  ? vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out
                                  : 0U);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__ext_imm + vlSelf->top__DOT__out_data1);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__ext_imm + vlSelf->top__DOT__out_data1);
    vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
        = (vlSelf->top__DOT__ext_imm + vlSelf->top__DOT__out_data1);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((0xfffffffeU 
                                             & vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                       == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu_ctrl) == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->alu_result = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit)
                           ? vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out
                           : 0U);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->alu_result 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1U] 
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
    vlSelf->rd_data = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out
                        : 0U);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__PC_src) 
                       == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__PC_src) == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__PC_src) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__PC_src) == 
              vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__PC_src) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__PC_src) == 
              vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [2U]));
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
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__reg_file__DOT__rf__v0;
    __Vdlyvval__top__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__reg_file__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__reg_file__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->wen) & (0U != (0x1fU & (vlSelf->instruction 
                                                 >> 7U))))) {
        __Vdlyvval__top__DOT__reg_file__DOT__rf__v0 
            = vlSelf->rd_data;
        __Vdlyvset__top__DOT__reg_file__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0 
            = (0x1fU & (vlSelf->instruction >> 7U));
    }
    if (__Vdlyvset__top__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__reg_file__DOT__rf__v0;
    }
    if ((0U == (0x1fU & (vlSelf->instruction >> 0xfU)))) {
        vlSelf->top__DOT__rs1_data = 0U;
        vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->top__DOT__rs1_data = vlSelf->top__DOT__reg_file__DOT__rf
            [(0x1fU & (vlSelf->instruction >> 0xfU))];
        vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[(0x1fU 
                                                   & (vlSelf->instruction 
                                                      >> 0xfU))];
    }
    vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->top__DOT__rs1_data));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x17U == (0x7fU & vlSelf->instruction)) 
                       == vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__test_1__DOT__i0__DOT__hit = (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->instruction)) 
                                                   == 
                                                   vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x17U == (0x7fU & vlSelf->instruction)) 
                          == vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__test_1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit) 
                                                   | ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->instruction)) 
                                                      == 
                                                      vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->top__DOT__out_data1 = ((IData)(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__ext_imm + vlSelf->top__DOT__out_data1);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__ext_imm + vlSelf->top__DOT__out_data1);
    vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
        = (vlSelf->top__DOT__ext_imm + vlSelf->top__DOT__out_data1);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((0xfffffffeU 
                                             & vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                       == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu_ctrl) == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->alu_result = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit)
                           ? vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out
                           : 0U);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->alu_result 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1U] 
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
    vlSelf->rd_data = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out
                        : 0U);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__PC_src) 
                       == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__PC_src) == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__PC_src) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__PC_src) == 
              vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__PC_src) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__PC_src) == 
              vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->next_pc = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out
                        : 0x80000000U);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
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
    VlTriggerVec<1> __VpreTriggered;
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
