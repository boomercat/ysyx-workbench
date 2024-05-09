#ifndef __CIRCUIT_H_
#define __CIRCUIT_H_

#include <Vtop.h>
#include <verilated_vcd_c.h>
#include <svdpi.h>
#include <Vtop__Dpi.h>
#include <common.h>
#include<stdlib.h>
#include<string.h>
#include <verilated.h>
extern Vtop* top;
extern VerilatedVcdC* tfp;
extern word_t inst,pc;


int get_inst(vaddr_t addr);
long long read_mem(long long addr, int len);
void write_mem(long long addr, int len, long long date);
void update_regs(int idx, long long data);







#endif