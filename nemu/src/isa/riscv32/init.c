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
// static const uint32_t img [] = {
//   0x00000297,  // auipc t0,0
//   0x00028823,  // sb  zero,16(t0)
//   0x0102c503,  // lbu a0,16(t0)
//   0x00100073,  // ebreak (used as nemu_trap)
//   0xdeadbeef,  // some data
// };

static const uint32_t img[] = {
    0b00000011110000001011011110010011, // sltiu 
    0b10000000000000000000000100110111, // lui x2 0x80000
    0b00000000100000010000000100010011, // addi x2 x2 0x8
    // 添加sb指令: 存储一个字节到内存地址0x80000008
    0b00000000000100010000001000100011, // sb x1, 0(x2)
    // 添加sh指令: 存储一个半字到内存地址0x800000
    0b00000000001000010001001000100011, // sh x2, 2(x2)
    // 添加sw指令: 存储一个字到内存地址0x8000000C
    0b00000000001100010010001000100011, // sw x3, 4(x2) 把sp的内容0x80000008再+offset，作为地址，然后把gp[31:0]写到这个内存中
    0b00000000000000010010001110000011, // lh
    //0b00000000000001010000010100010011, // addi x10 x10 0      0x8000001c mv a0,a0
    0b00000000010100010001000010010011, // slli x1, x0, 0x1
    0b00000000010100010101000010010011, // slli x1, x0, 0x1
    0b01000000000100010101000110010011, // srai x1, x0, 0x1

    0b00000000000100000000000001110011  // EBREAK
};



static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;
  
  /* The zero register is always 0. */
  cpu.gpr[0] = 0;

  cpu.mstatus =0x1800;
  
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
