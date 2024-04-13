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

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif

#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInstPrinter.h"
#if LLVM_VERSION_MAJOR >= 14
#include "llvm/MC/TargetRegistry.h"
#if LLVM_VERSION_MAJOR >= 15
#include "llvm/MC/MCSubtargetInfo.h"
#endif
#else
#include "llvm/Support/TargetRegistry.h"
#endif
#include "llvm/Support/TargetSelect.h"

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic pop
#endif

#if LLVM_VERSION_MAJOR < 11
#error Please use LLVM with major version >= 11  //保持llvm库兼容性
#endif

using namespace llvm;
                                                                                         //(machine code instruction)
static llvm::MCDisassembler *gDisassembler = nullptr; //MCDisassembler负责将二进制机器代码转为llvm的中间MCInst指令
static llvm::MCSubtargetInfo *gSTI = nullptr;         //提供子目标的信息（CPU，ISA等）
static llvm::MCInstPrinter *gIP = nullptr;            //将MCInst指令转为人类可读的汇编语言格式
//初始化反汇编器
extern "C" void init_disasm(const char *triple) {   
  llvm::InitializeAllTargetInfos(); //初始化LLVM的目标信息
  llvm::InitializeAllTargetMCs();   //初始化目标的Machine Code，也就是使LLVM能够生成和理解机器特定的代码
  llvm::InitializeAllAsmParsers();   //初始化汇编解析器，设置不同架构的汇编解析器
  llvm::InitializeAllDisassemblers(); //初始化反汇编器，使二进制代码转为人类可读的格式

  std::string errstr;     //报错的信息
  std::string gTriple(triple); //目标架构厂商和操作系统 eg "x86_64-unknow-linux-gnu"

  llvm::MCInstrInfo *gMII = nullptr; //存储目标的机器指令
  llvm::MCRegisterInfo *gMRI = nullptr; //存储目标寄存器元数据
  auto target = llvm::TargetRegistry::lookupTarget(gTriple, errstr);  //根据gTriple指令的目标三元组来查找
  if (!target) {                                                      //匹配的目标架构，找到就返回给target，找不到就返回nullptr
    llvm::errs() << "Can't find target for " << gTriple << ": " << errstr << "\n";  
    assert(0); //没找着，中断
  }

  MCTargetOptions MCOptions;  
  gSTI = target->createMCSubtargetInfo(gTriple, "", ""); //函数需要三个参数（gTriple，CPU type，特性string），这里使用默认配置
  std::string isa = target->getName();
  if (isa == "riscv32" || isa == "riscv64") {
    gSTI->ApplyFeatureFlag("+m");   //加特性标志 m 乘法
    gSTI->ApplyFeatureFlag("+a");   //加原子操作 a
    gSTI->ApplyFeatureFlag("+c");   //压缩指令 c
    gSTI->ApplyFeatureFlag("+f");   //浮点
    gSTI->ApplyFeatureFlag("+d");   //双精度
  }
  gMII = target->createMCInstrInfo();     //提供目标架构指令集信息，eg（operate code src1 src2）
  gMRI = target->createMCRegInfo(gTriple);  //提供目标架构中机器寄存器信息(编号 名称)
  auto AsmInfo = target->createMCAsmInfo(*gMRI, gTriple, MCOptions); //人类可读的汇编带按摩
#if LLVM_VERSION_MAJOR >= 13
   auto llvmTripleTwine = Twine(triple);
   auto llvmtriple = llvm::Triple(llvmTripleTwine);
   auto Ctx = new llvm::MCContext(llvmtriple,AsmInfo, gMRI, nullptr);
#else
   auto Ctx = new llvm::MCContext(AsmInfo, gMRI, nullptr);
#endif
  gDisassembler = target->createMCDisassembler(*gSTI, *Ctx); //创建反汇编器实例，用于将二进制指令转为LLVM中间表示MCInst
  gIP = target->createMCInstPrinter(llvm::Triple(gTriple),  //创建指令打印器，把MCInst转为可读汇编语言
      AsmInfo->getAssemblerDialect(), *AsmInfo, *gMII, *gMRI);
  gIP->setPrintImmHex(true);     //打印立即数为16进制
  gIP->setPrintBranchImmAsAddress(true); //设置分支指令的立即数作为地址打印
  if (isa == "riscv32" || isa == "riscv64")
    gIP->applyTargetSpecificCLOption("no-aliases");    //禁用别名
}

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
  MCInst inst;      //解析后的指令
  llvm::ArrayRef<uint8_t> arr(code, nbyte);  //引用字节码数组
  uint64_t dummy_size = 0;                  
  gDisassembler->getInstruction(inst, dummy_size, arr, pc, llvm::nulls()); //调用全局反汇编器 gDisassembler解析pc处的指令

  std::string s;
  raw_string_ostream os(s);
  gIP->printInst(&inst, pc, "", *gSTI, os); //格式化inst为文本形式，写入输出流os

  int skip = s.find_first_not_of('\t');   //移除空白
  const char *p = s.c_str() + skip;       //跳过
  assert((int)s.length() - skip < size);  
  strcpy(str, p);                         
}
