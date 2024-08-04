

#ifndef __COMMON_H_
#define __COMMON_H_

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>
#include <debug.h>
#include "v_sim.h"
#include "macro.h"
//  #define CONFIG_ITRACE 1
#define CONFIG_ISA_riscv 1
// #define CONFIG_NPC_WATCHPOINT 1
// #define CONFIG_NPC_TRACE 1
#define CONFIG_DIFF_NEMU 1


#define FMT_WORD "0x%08x"
#define FMT_PADDR "0x%08x"
typedef uint32_t word_t;
typedef int32_t sword_t;
typedef uint32_t vaddr_t;
typedef uint32_t paddr_t;
extern Vtop* top;
extern VerilatedVcdC* tfp ;

#endif