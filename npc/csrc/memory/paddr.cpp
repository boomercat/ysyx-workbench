#include <memory/paddr.h>
#include <memory/host.h>
#include <debug.h>
#include <cpu.h>
#include <paddr.h>
#include <device.h>
extern bool is_skip_ref;
static int32_t device_read = 0;
static int32_t device_write = 0;
static uint8_t pmem[CONFIG_MSIZE] = {};
static uint64_t sys_time = 0;

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - RESET_VECTOR; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }
void init_mem() {
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
}
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

void init_flag(){
    device_read = (device_read < 0) ? 0 : device_read;
    device_write = (device_write < 0) ? 0 : device_write;
}


extern "C" void pmem_write(int waddr, int wdata, int len) {
  if(waddr == SERIAL_PORT){
    is_skip_ref = true;
  }
  init_flag();
  if(device_write >= 3) device_write = 0;
	// if(waddr == SERIAL_PORT && device_write == 0) {
  //   device_write++;
  //   // printf("this is SERIAL_POORT\n"); 
  //   putc((char)wdata,stderr); return;}
	// else if(waddr == SERIAL_PORT && device_write != 0) {device_write++; return;}
  if(waddr == SERIAL_PORT){
    putc((char)wdata,stderr); 
    return;
  }
  if (in_pmem(waddr)) {
      // printf("Writing to address: 0x%x, data: 0x%x, wmask: 0x%x\n", waddr, wdata, len);
      paddr_write(waddr,wdata,len);
  } else {
      printf("Write address invalid: 0x%x\n", waddr);
      out_of_bound(waddr);
  }
}

extern "C" uint32_t pmem_read(uint32_t addr,int len) {
    if(addr == RTC_ADDR | addr == RTC_ADDR+4){
      is_skip_ref = true;
    }
    init_flag();
    if(device_read >= 3) device_read = 0;
    if(addr == RTC_ADDR+4){
      if(device_read == 0){
        sys_time = get_time();
      }
      device_read++;
      return (uint32_t) (sys_time >> 32);
    }
    if(addr == RTC_ADDR){
      device_read++;
      return (uint32_t) sys_time;
    }
    if(addr == SERIAL_PORT) return 0;
    if (in_pmem(addr)) {
        // printf("Reading from address: 0x%x, data: 0x%x\n", addr, paddr_read(addr,len));
        return host_read(guest_to_host(addr),len);
    }
    printf("Read address invalid: 0x%x\n", addr);
    out_of_bound(addr);
    return 0;
}

