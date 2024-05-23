// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP(IData/*31:0*/ i);
void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npcinv_TOP(IData/*31:0*/ i);
void Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ write_data, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout);
    vlSelf->top__DOT__instruction = vlSelf->__Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout;
    if ((0x100073U == vlSelf->top__DOT__instruction)) {
        Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP(1U);
    }
    if (((IData)((0x2001013U == (0xfe00707fU & vlSelf->top__DOT__instruction))) 
         | ((IData)((0x2005013U == (0xfe00707fU & vlSelf->top__DOT__instruction))) 
            | (IData)((0x82005013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__instruction)))))) {
        Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npcinv_TOP(1U);
    }
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
    if ((0U == (0x1fU & (vlSelf->top__DOT__instruction 
                         >> 0xfU)))) {
        vlSelf->top__DOT__rs1_data = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->top__DOT__rs1_data = vlSelf->top__DOT__reg_file__DOT__rf
            [(0x1fU & (vlSelf->top__DOT__instruction 
                       >> 0xfU))];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[(0x1fU 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0xfU))];
    }
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                       == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__instruction) 
           == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__RegWrite = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                       == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__instruction) 
           == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__PC_src = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit)
                                 ? (IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out)
                                 : 0U);
    vlSelf->top__DOT__memory_1__DOT__extend_src = (
                                                   (0x380U 
                                                    & (vlSelf->top__DOT__instruction 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->top__DOT__instruction));
    if ((0U == (0x1fU & (vlSelf->top__DOT__instruction 
                         >> 0x14U)))) {
        vlSelf->top__DOT__rs2_data = 0U;
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0U] = 0U;
    } else {
        vlSelf->top__DOT__rs2_data = vlSelf->top__DOT__reg_file__DOT__rf
            [(0x1fU & (vlSelf->top__DOT__instruction 
                       >> 0x14U))];
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[(0x1fU 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0x14U))];
    }
    vlSelf->top__DOT__alu_ctrl = (((((((((0x17U == 
                                          (0x7fU & vlSelf->top__DOT__instruction)) 
                                         | (3U == (0x707fU 
                                                   & vlSelf->top__DOT__instruction))) 
                                        | (0x33U == 
                                           (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction))) 
                                       | (0x13U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__instruction))) 
                                      | (0x37U == (0x7fU 
                                                   & vlSelf->top__DOT__instruction))) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__instruction))) 
                                    | (0x40000033U 
                                       == (0xfe00707fU 
                                           & vlSelf->top__DOT__instruction))) 
                                   | (0x67U == (0x707fU 
                                                & vlSelf->top__DOT__instruction)))
                                   ? ((0x17U == (0x7fU 
                                                 & vlSelf->top__DOT__instruction))
                                       ? 0U : ((3U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__instruction))
                                                ? 0U
                                                : (
                                                   (0x33U 
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
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__instruction))
                                                       ? 0U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__instruction))
                                                        ? 2U
                                                        : 3U)))))))
                                   : (((((((((0x3033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__instruction)) 
                                             | (0x2013U 
                                                == 
                                                (0x607fU 
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
                                         | (0x6013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__instruction))) 
                                        | (0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__instruction))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__instruction)))
                                       ? ((0x3033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__instruction))
                                           ? 4U : (
                                                   (0x2013U 
                                                    == 
                                                    (0x607fU 
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
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__instruction))
                                                       ? 6U
                                                       : 
                                                      ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__instruction))
                                                        ? 6U
                                                        : 7U))))))
                                       : (((((((((0x1033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction)) 
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
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__instruction))) 
                                             | (0x40005013U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__instruction))) 
                                            | (0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__instruction))) 
                                           | (0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__instruction)))
                                           ? ((0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction))
                                               ? 8U
                                               : ((0x1013U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__instruction))
                                                   ? 8U
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
                                                     ? 0xaU
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__instruction))
                                                      ? 9U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__instruction))
                                                       ? 9U
                                                       : 0xcU))))))
                                           : ((((((
                                                   (((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__instruction)) 
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
                                                | (0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__instruction))) 
                                               | (0x6063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__instruction)))
                                               ? ((0x23U 
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
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__instruction))
                                                        ? 0x10U
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__instruction))
                                                         ? 0xeU
                                                         : 0x11U)))))))
                                               : ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__instruction))
                                                   ? 0xfU
                                                   : 0U)))));
    vlSelf->top__DOT__rs2_valid = ((0x63U == (0x7fU 
                                              & vlSelf->top__DOT__instruction)) 
                                   | (0x33U == (0x7fU 
                                                & vlSelf->top__DOT__instruction)));
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
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                       == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__instruction) 
           == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__Ext_type = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->top__DOT__rs1_data));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__rs2_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x17U == (0x7fU & vlSelf->top__DOT__instruction)) 
                       == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((0x17U == (0x7fU & vlSelf->top__DOT__instruction)) 
           == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x17U == (0x7fU & vlSelf->top__DOT__instruction)) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x17U == (0x7fU & vlSelf->top__DOT__instruction)) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src1_data = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out
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
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->top__DOT__ext_imm));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((vlSelf->pc 
                                             + vlSelf->top__DOT__ext_imm))));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__rs2_valid) 
                       == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__rs2_valid) == 
           vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__rs2_valid) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__rs2_valid) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src2_data = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0x10U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__src2_data)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0xa00000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              ? (vlSelf->top__DOT__src1_data 
                                                 >> 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              : 0U))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x900000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              ? VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__src1_data, 
                                                               (0x3fU 
                                                                & vlSelf->top__DOT__src2_data))
                                              : (- 
                                                 (vlSelf->top__DOT__src1_data 
                                                  >> 0x1fU))))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x800000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              ? (vlSelf->top__DOT__src1_data 
                                                 << 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              : 0U))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x700000000ULL | (QData)((IData)((vlSelf->top__DOT__src1_data 
                                             & vlSelf->top__DOT__src2_data))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->top__DOT__src1_data 
                                             | vlSelf->top__DOT__src2_data))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x500000000ULL | (QData)((IData)((vlSelf->top__DOT__src1_data 
                                             ^ vlSelf->top__DOT__src2_data))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x200000000ULL | (QData)((IData)((vlSelf->top__DOT__src1_data 
                                             - vlSelf->top__DOT__src2_data))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0x10U] 
        = vlSelf->top__DOT__src2_data;
    if ((0x1fU >= (0x3fU & vlSelf->top__DOT__src2_data))) {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7U] 
            = (vlSelf->top__DOT__src1_data >> (0x3fU 
                                               & vlSelf->top__DOT__src2_data));
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8U] 
            = VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__src1_data, 
                             (0x3fU & vlSelf->top__DOT__src2_data));
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9U] 
            = (vlSelf->top__DOT__src1_data << (0x3fU 
                                               & vlSelf->top__DOT__src2_data));
    } else {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7U] = 0U;
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8U] 
            = (- (vlSelf->top__DOT__src1_data >> 0x1fU));
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9U] = 0U;
    }
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->top__DOT__src1_data & vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (vlSelf->top__DOT__src1_data | vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (vlSelf->top__DOT__src1_data ^ vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (vlSelf->top__DOT__src1_data - vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0x11U] 
        = (vlSelf->top__DOT__src1_data + vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha4dc0392__0 = (vlSelf->top__DOT__src1_data 
                                      == vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha706d132__0 = VL_GTES_III(32, vlSelf->top__DOT__src1_data, vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha73a0501__0 = (vlSelf->top__DOT__src1_data 
                                      >= vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha493ef8e__0 = (vlSelf->top__DOT__src1_data 
                                      != vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
        = (vlSelf->top__DOT__src1_data + vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha62228bd__0 = VL_LTS_III(32, vlSelf->top__DOT__src1_data, vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha626693d__0 = (vlSelf->top__DOT__src1_data 
                                      < vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0xd00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha4dc0392__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = vlSelf->__VdfgTmp_ha4dc0392__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha706d132__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = vlSelf->__VdfgTmp_ha706d132__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0xf00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha73a0501__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = vlSelf->__VdfgTmp_ha73a0501__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x1200000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha493ef8e__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = vlSelf->__VdfgTmp_ha493ef8e__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x300000000ULL | (QData)((IData)((0xfffffffeU 
                                             & vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0x11U] 
        = (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0xfffffffeU & vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha62228bd__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha62228bd__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = vlSelf->__VdfgTmp_ha62228bd__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = vlSelf->__VdfgTmp_ha62228bd__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x1100000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha626693d__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha626693d__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = vlSelf->__VdfgTmp_ha626693d__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = vlSelf->__VdfgTmp_ha626693d__0;
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
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->alu_result = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit)
                           ? vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out
                           : 0U);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->alu_result 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__add_pc__DOT__next_pc_type = (
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__PC_src)) 
                                                    & (1U 
                                                       == vlSelf->alu_result))
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__PC_src));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->alu_result + vlSelf->pc);
    if ((3U == (0x7fU & vlSelf->top__DOT__instruction))) {
        Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_read_TOP(vlSelf->alu_result, vlSelf->__Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout);
        vlSelf->top__DOT__memory_1__DOT__rdata = vlSelf->__Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout;
    } else {
        vlSelf->top__DOT__memory_1__DOT__rdata = 0U;
    }
    if ((0x23U == (0x7fU & vlSelf->top__DOT__instruction))) {
        Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_write_TOP(vlSelf->alu_result, vlSelf->top__DOT__rs2_data, 
                                                                             ((0U 
                                                                               == 
                                                                               (7U 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0xcU)))
                                                                               ? 1U
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0xcU)))
                                                                                ? 3U
                                                                                : 
                                                                               ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0xcU)))
                                                                                 ? 0xfU
                                                                                 : 0U))));
    }
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
    vlSelf->next_pc = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out
                        : 0x80000000U);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[0U] 
        = (0x10300000000ULL | (QData)((IData)(vlSelf->top__DOT__memory_1__DOT__rdata)));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[1U] 
        = (0x28300000000ULL | (QData)((IData)((0xffffU 
                                               & vlSelf->top__DOT__memory_1__DOT__rdata))));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[2U] 
        = (0x8300000000ULL | (QData)((IData)((((- (IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__memory_1__DOT__rdata)))));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[3U] 
        = (0x20300000000ULL | (QData)((IData)((0xffU 
                                               & vlSelf->top__DOT__memory_1__DOT__rdata))));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->top__DOT__memory_1__DOT__rdata)))));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__memory_1__DOT__rdata;
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[1U] 
        = (0xffffU & vlSelf->top__DOT__memory_1__DOT__rdata);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__memory_1__DOT__rdata 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->top__DOT__memory_1__DOT__rdata));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->top__DOT__memory_1__DOT__rdata);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__memory_1__DOT__rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->top__DOT__memory_1__DOT__rdata));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                       == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
           == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                          == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
              == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                          == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
              == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                          == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
              == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                          == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
              == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__memory_out_data = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit)
                                          ? vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out
                                          : 0U);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0U] 
        = (QData)((IData)(vlSelf->top__DOT__memory_out_data));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__memory_out_data;
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
    vlSelf->rd_data = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out
                        : 0U);
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
    if (((IData)(vlSelf->wen) & (0U != (0x1fU & (vlSelf->top__DOT__instruction 
                                                 >> 7U))))) {
        __Vdlyvval__top__DOT__reg_file__DOT__rf__v0 
            = vlSelf->rd_data;
        __Vdlyvset__top__DOT__reg_file__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__instruction 
                        >> 7U));
    }
    if (__Vdlyvset__top__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__reg_file__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__reg_file__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((0U == (0x1fU & (vlSelf->top__DOT__instruction 
                         >> 0xfU)))) {
        vlSelf->top__DOT__rs1_data = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->top__DOT__rs1_data = vlSelf->top__DOT__reg_file__DOT__rf
            [(0x1fU & (vlSelf->top__DOT__instruction 
                       >> 0xfU))];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[(0x1fU 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0xfU))];
    }
    if ((0U == (0x1fU & (vlSelf->top__DOT__instruction 
                         >> 0x14U)))) {
        vlSelf->top__DOT__rs2_data = 0U;
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0U] = 0U;
    } else {
        vlSelf->top__DOT__rs2_data = vlSelf->top__DOT__reg_file__DOT__rf
            [(0x1fU & (vlSelf->top__DOT__instruction 
                       >> 0x14U))];
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[(0x1fU 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0x14U))];
    }
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->top__DOT__rs1_data));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__rs2_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x17U == (0x7fU & vlSelf->top__DOT__instruction)) 
                       == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((0x17U == (0x7fU & vlSelf->top__DOT__instruction)) 
           == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x17U == (0x7fU & vlSelf->top__DOT__instruction)) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x17U == (0x7fU & vlSelf->top__DOT__instruction)) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src1_data = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__rs2_valid) 
                       == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__rs2_valid) == 
           vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__rs2_valid) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__rs2_valid) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src2_data = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0x10U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__src2_data)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0xa00000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              ? (vlSelf->top__DOT__src1_data 
                                                 >> 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              : 0U))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x900000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              ? VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__src1_data, 
                                                               (0x3fU 
                                                                & vlSelf->top__DOT__src2_data))
                                              : (- 
                                                 (vlSelf->top__DOT__src1_data 
                                                  >> 0x1fU))))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x800000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              ? (vlSelf->top__DOT__src1_data 
                                                 << 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                              : 0U))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x700000000ULL | (QData)((IData)((vlSelf->top__DOT__src1_data 
                                             & vlSelf->top__DOT__src2_data))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->top__DOT__src1_data 
                                             | vlSelf->top__DOT__src2_data))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x500000000ULL | (QData)((IData)((vlSelf->top__DOT__src1_data 
                                             ^ vlSelf->top__DOT__src2_data))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x200000000ULL | (QData)((IData)((vlSelf->top__DOT__src1_data 
                                             - vlSelf->top__DOT__src2_data))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0x10U] 
        = vlSelf->top__DOT__src2_data;
    if ((0x1fU >= (0x3fU & vlSelf->top__DOT__src2_data))) {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7U] 
            = (vlSelf->top__DOT__src1_data >> (0x3fU 
                                               & vlSelf->top__DOT__src2_data));
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8U] 
            = VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__src1_data, 
                             (0x3fU & vlSelf->top__DOT__src2_data));
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9U] 
            = (vlSelf->top__DOT__src1_data << (0x3fU 
                                               & vlSelf->top__DOT__src2_data));
    } else {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7U] = 0U;
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8U] 
            = (- (vlSelf->top__DOT__src1_data >> 0x1fU));
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9U] = 0U;
    }
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->top__DOT__src1_data & vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (vlSelf->top__DOT__src1_data | vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (vlSelf->top__DOT__src1_data ^ vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (vlSelf->top__DOT__src1_data - vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0x11U] 
        = (vlSelf->top__DOT__src1_data + vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha4dc0392__0 = (vlSelf->top__DOT__src1_data 
                                      == vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha706d132__0 = VL_GTES_III(32, vlSelf->top__DOT__src1_data, vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha73a0501__0 = (vlSelf->top__DOT__src1_data 
                                      >= vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha493ef8e__0 = (vlSelf->top__DOT__src1_data 
                                      != vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
        = (vlSelf->top__DOT__src1_data + vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha62228bd__0 = VL_LTS_III(32, vlSelf->top__DOT__src1_data, vlSelf->top__DOT__src2_data);
    vlSelf->__VdfgTmp_ha626693d__0 = (vlSelf->top__DOT__src1_data 
                                      < vlSelf->top__DOT__src2_data);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0xd00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha4dc0392__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = vlSelf->__VdfgTmp_ha4dc0392__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha706d132__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = vlSelf->__VdfgTmp_ha706d132__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0xf00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha73a0501__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = vlSelf->__VdfgTmp_ha73a0501__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x1200000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha493ef8e__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = vlSelf->__VdfgTmp_ha493ef8e__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x300000000ULL | (QData)((IData)((0xfffffffeU 
                                             & vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0))));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0x11U] 
        = (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0xfffffffeU & vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha62228bd__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha62228bd__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = vlSelf->__VdfgTmp_ha62228bd__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = vlSelf->__VdfgTmp_ha62228bd__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x1100000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha626693d__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha626693d__0)));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = vlSelf->__VdfgTmp_ha626693d__0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = vlSelf->__VdfgTmp_ha626693d__0;
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
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_ctrl) 
                          == vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_ctrl) == 
              vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->alu_result = ((IData)(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit)
                           ? vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out
                           : 0U);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->alu_result 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__add_pc__DOT__next_pc_type = (
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__PC_src)) 
                                                    & (1U 
                                                       == vlSelf->alu_result))
                                                    ? 3U
                                                    : (IData)(vlSelf->top__DOT__PC_src));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->alu_result + vlSelf->pc);
    if ((3U == (0x7fU & vlSelf->top__DOT__instruction))) {
        Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_read_TOP(vlSelf->alu_result, vlSelf->__Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout);
        vlSelf->top__DOT__memory_1__DOT__rdata = vlSelf->__Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout;
    } else {
        vlSelf->top__DOT__memory_1__DOT__rdata = 0U;
    }
    if ((0x23U == (0x7fU & vlSelf->top__DOT__instruction))) {
        Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_write_TOP(vlSelf->alu_result, vlSelf->top__DOT__rs2_data, 
                                                                             ((0U 
                                                                               == 
                                                                               (7U 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0xcU)))
                                                                               ? 1U
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0xcU)))
                                                                                ? 3U
                                                                                : 
                                                                               ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0xcU)))
                                                                                 ? 0xfU
                                                                                 : 0U))));
    }
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
    vlSelf->next_pc = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out
                        : 0x80000000U);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[0U] 
        = (0x10300000000ULL | (QData)((IData)(vlSelf->top__DOT__memory_1__DOT__rdata)));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[1U] 
        = (0x28300000000ULL | (QData)((IData)((0xffffU 
                                               & vlSelf->top__DOT__memory_1__DOT__rdata))));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[2U] 
        = (0x8300000000ULL | (QData)((IData)((((- (IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__memory_1__DOT__rdata)))));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[3U] 
        = (0x20300000000ULL | (QData)((IData)((0xffU 
                                               & vlSelf->top__DOT__memory_1__DOT__rdata))));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->top__DOT__memory_1__DOT__rdata)))));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__memory_1__DOT__rdata;
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[1U] 
        = (0xffffU & vlSelf->top__DOT__memory_1__DOT__rdata);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__memory_1__DOT__rdata 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->top__DOT__memory_1__DOT__rdata));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->top__DOT__memory_1__DOT__rdata);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__memory_1__DOT__rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->top__DOT__memory_1__DOT__rdata));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                       == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
           == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                          == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
              == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                          == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
              == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                          == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
              == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
                          == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__memory_1__DOT__extend_src) 
              == vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__memory_out_data = ((IData)(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit)
                                          ? vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out
                                          : 0U);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0U] 
        = (QData)((IData)(vlSelf->top__DOT__memory_out_data));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__memory_out_data;
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
    vlSelf->rd_data = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out
                        : 0U);
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
