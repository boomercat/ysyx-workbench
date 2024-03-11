#include <nvboard.h>
#include <Vtop.h>
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h> 
static TOP_NAME dut;

void nvboard_bind_all_pins(TOP_NAME* top);

static void single_cycle() {
  dut.a = rand() & 1; dut.eval();
  dut.b = rand() & 1; dut.eval();
}

int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();


  while(1) 
  {
    nvboard_update();
    sleep(1);
    single_cycle();
  }
}
