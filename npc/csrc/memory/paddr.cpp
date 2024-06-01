#include <memory/paddr.h>
#include <memory/host.h>
#include <debug.h>
#include <cpu.h>
#include <paddr.h>

static uint8_t pmem[CONFIG_MSIZE] = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - RESET_VECTOR; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }
void init_mem() {
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
}
// void init_mem(size_t size){ 
// 	pmem = (uint8_t *)malloc(size * sizeof(uint8_t));
// 	memcpy(pmem , img , sizeof(img));
// 	if(pmem == NULL){exit(0);}
// 	Log("npc physical memory area [%#x, %#lx]",RESET_VECTOR, RESET_VECTOR + size * sizeof(uint8_t));
// }

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD "\n",
      addr, PMEM_LEFT, PMEM_RIGHT, npc_cpu.pc);
}

word_t paddr_read(paddr_t addr, int len) {
  if (in_pmem(addr)) {
    return host_read(guest_to_host(addr),len);
  }
  // printf("read fail!\n");
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, word_t data, int len) {
  if (in_pmem(addr)) { 
    host_write(guest_to_host(addr), len, data); 
    return; 
    }
  printf("write fail!\n");
  out_of_bound(addr);
}
extern "C" void pmem_write(int waddr, int wdata, int len) {
    // waddr = waddr & ~0x3u;
    if (in_pmem(waddr)) {
        printf("Writing to address: 0x%x, data: 0x%x, wmask: 0x%x\n", waddr, wdata, len);
        paddr_write(waddr,wdata,len);
        // uint8_t *vaddr = guest_to_host(waddr);
        // for (int i = 0; i < 4; i++) {
        //     if (wmask & (1 << i)) {
        //         vaddr[i] = (wdata >> (8 * i)) & 0xFF;
        //     }
        // }
    } else {
        printf("Write address invalid: 0x%x\n", waddr);
        out_of_bound(waddr);
    }
}


extern "C" uint32_t pmem_read(uint32_t addr,int len) {
    if (in_pmem(addr)) {
        // uint32_t data = host_read(guest_to_host(addr), 4);
        // uint32_t *data = (uint32_t *) guest_to_host(addr);
        printf("Reading from address: 0x%x, data: 0x%x\n", addr, paddr_read(addr,len));
        // return *data;
        return host_read(guest_to_host(addr),len);
    }
    printf("Read address invalid: 0x%x\n", addr);
    out_of_bound(addr);
    return 0;
}

