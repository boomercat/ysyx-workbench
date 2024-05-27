// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/white/ysyx-workbench/npc/vsrc/pc_tranfer_inst.v:6:38
    extern unsigned int pmem_read(unsigned int raddr, int len);
    // DPI import at /home/white/ysyx-workbench/npc/vsrc/Data_memory.v:15:30
    extern void pmem_write(int addr, int data, int len);
    // DPI import at /home/white/ysyx-workbench/npc/vsrc/IDU.v:34:30
    extern void set_npcinv(int i);
    // DPI import at /home/white/ysyx-workbench/npc/vsrc/IDU.v:23:30
    extern void set_npctrap(int i);

#ifdef __cplusplus
}
#endif

#endif  // guard
