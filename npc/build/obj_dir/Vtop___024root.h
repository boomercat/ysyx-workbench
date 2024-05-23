// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(wen,0,0);
        CData/*2:0*/ top__DOT__Ext_type;
        CData/*4:0*/ top__DOT__alu_ctrl;
        CData/*1:0*/ top__DOT__PC_src;
        CData/*1:0*/ top__DOT__RegWrite;
        CData/*0:0*/ top__DOT__vaild;
        CData/*0:0*/ top__DOT__rs2_valid;
        CData/*1:0*/ top__DOT__add_pc__DOT__next_pc_type;
        CData/*0:0*/ top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit;
        CData/*2:0*/ top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__src1_data_num__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__src2_data_num__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__alu__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__Write_rd_data__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit;
        CData/*0:0*/ __VdfgTmp_ha626693d__0;
        CData/*0:0*/ __VdfgTmp_ha62228bd__0;
        CData/*0:0*/ __VdfgTmp_ha4dc0392__0;
        CData/*0:0*/ __VdfgTmp_ha706d132__0;
        CData/*0:0*/ __VdfgTmp_ha73a0501__0;
        CData/*0:0*/ __VdfgTmp_ha493ef8e__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ top__DOT__memory_1__DOT__extend_src;
        VL_IN(pc,31,0);
        VL_OUT(rd_data,31,0);
        VL_OUT(next_pc,31,0);
        VL_OUT(alu_result,31,0);
        IData/*31:0*/ top__DOT__rs1_data;
        IData/*31:0*/ top__DOT__rs2_data;
        IData/*31:0*/ top__DOT__ext_imm;
        IData/*31:0*/ top__DOT__src1_data;
        IData/*31:0*/ top__DOT__src2_data;
        IData/*31:0*/ top__DOT__instruction;
        IData/*31:0*/ top__DOT__memory_out_data;
        IData/*31:0*/ top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__src1_data_num__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__src2_data_num__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__alu__DOT____VdfgTmp_h6abbea74__0;
        IData/*31:0*/ top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__Write_rd_data__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__memory_1__DOT__rdata;
        IData/*31:0*/ top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 7> top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 7> top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 7> top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 7> top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list;
    };
    struct {
        VlUnpacked<CData/*6:0*/, 7> top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 7> top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 5> top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 5> top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 5> top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__reg_file__DOT__rf;
        VlUnpacked<QData/*34:0*/, 5> top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> top__DOT__src1_data_num__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__src1_data_num__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__src1_data_num__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> top__DOT__src2_data_num__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__src2_data_num__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__src2_data_num__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*36:0*/, 18> top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 18> top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 18> top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__Write_rd_data__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__Write_rd_data__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__Write_rd_data__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*41:0*/, 5> top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*9:0*/, 5> top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
