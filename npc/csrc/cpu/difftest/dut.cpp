#include <dlfcn.h>
#include <debug.h>
#include <cpu.h>
#include <memory/paddr.h>
#include <utils.h>
#include <difftest.h>
#include <macro.h>

extern char *regs[];
extern vaddr_t pc;
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void  isa_reg_display();
static bool is_skip_ref = true;
static int skip_dut_nr_inst = 0;


// bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) { 
//   int reg_num = ARRLEN(ref_r->gpr);
//   for (int i = 0; i < reg_num; i++) {
//     if (ref_r->gpr[i] != npc_cpu.gpr[i]) {
//       return false;
//     }
//   }
//   if (ref_r->pc != npc_cpu.pc) {
//     return false;
//   }
//   return true;
// }

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i = 0;
  if (ref_r->pc != pc) printf("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD "\n", ref_r->pc, pc);
  for (i = 0; i < 32; ++ i) {
    if (ref_r->gpr[i] != npc_cpu.gpr[i]) {
      printf("%s reg is not correct:\n" "ref:" FMT_WORD "\n" "dut:" FMT_WORD "\n", regs[i], ref_r->gpr[i], npc_cpu.gpr[i]);
      return false;
    }
  }
  return ref_r->pc == pc;
}



// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  //assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);
  ref_difftest_regcpy = reinterpret_cast<void (*)(void*, bool)>(dlsym(handle, "difftest_regcpy"));
  //ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);


  ref_difftest_exec = reinterpret_cast<void (*)(uint64_t)>(dlsym(handle, "difftest_exec"));
  //ref_difftest_exec = dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);
  ref_difftest_raise_intr = reinterpret_cast<void (*)(uint64_t)>(dlsym(handle, "difftest_raise_intr"));
  //ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);
  void (*ref_difftest_init)(int) = reinterpret_cast<void (*)(int)>(dlsym(handle, "difftest_init"));
  //void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&npc_cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    isa_reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc_pc) {
  printf("is skip ref is %d\n",is_skip_ref);
  CPU_state ref_r;
  //ref_difftest_exec(1);
  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r,DIFFTEST_TO_DUT);
    if (ref_r.pc == npc_pc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc_pc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&npc_cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, npc_pc);
}
//void init_difftest(char *ref_so_file, long img_size, int port) { }


