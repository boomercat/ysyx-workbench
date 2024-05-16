/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x00028823,  // sb  zero,16(t0)
  0x0102c503,  // lbu a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

// static const uint32_t img [] = {
//  	//0b00000000110000000000001011101111, //jal   x5 12         0x80000000
//   //0b00000000000000001000000001100111,
//   //0b00000000000000000000010100010011,
// 	//0b00000000000000000001001000110111, //lui   x4 1          0x80000004
// 	0b00000000000000000000001010010111, //auipc x3 1          0x80000008
// 	0b00000000010100000000000010010011, //addi  x1 x0 5       0x8000000c
// 	0b00000000010100000000000010010011, //addi  x1 x0 5       0x80000010
// 	0b00000000000100000000000100010011, //addi  x2 x0 1       0x80000014
// 	0b00000000001000000000000100010011, //addi  x2 x0 2       0x80000018
// 	0b00000000000001010000010100010011, //addi x10 x10 0      0x8000001c mv a0,a0;  
//   0b00000000000100000000000001110011   
// };


static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;
  
  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
