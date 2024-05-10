#ifndef __CIRCUIT_H_
#define __CIRCUIT_H_

#include <Vtop.h>
#include <verilated_vcd_c.h>
#include <svdpi.h>
#include <Vtop__Dpi.h>
#include <verilated.h>
extern Vtop *top;
extern VerilatedVcdC *tfp;


int get_inst(long long  addr);
long long read_mem(long long addr, int len);
void write_mem(long long addr, int len, long long date);
void updatep_regs(int idx, long long data);







#endif