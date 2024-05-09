

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

#define FMT_WORD "0x%08x"
#define FMT_PADDR "0x%08x"
typedef uint32_t word_t;

typedef word_t vaddr_t;
typedef uint32_t paddr_t;
extern Vtop* top;
extern VerilatedVcdC* tfp ;

#endif