#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
//提供事件处理的抽象，Context* 存储了系统发生异常时的状态，arch/riscv.h
static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    //事件初始化为0
    Event ev = {0};
    //GRP1 gpr[15] 把自陷 打包成事件
    if(c->GPR1 == -1){
      ev.event = EVENT_YIELD;
    }else if(c->GPR1 >= 0 && c->GPR1 <= 19){
      ev.event = EVENT_SYSCALL;
    }else{
      ev.event = EVENT_ERROR;
    }
    printf("now ev.event is %d\n",ev.event);
    //根据异常号打包成不同的事件类型
    switch (c->mcause) {
      case EVENT_ERROR:break;
      default: c->mepc += 4;
    }
    printf("now in the handle function\n\n");
    //传回之前注册的回调函数
    c = user_handler(ev, c);

    // printf(c->mcause);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));
  
  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *c = (Context *)kstack.end - 1;
  // c->mepc = (uintptr_t)entry -4;
  c->mepc = (uintptr_t) entry;
  c->mstatus = 0x1800;
  c->gpr[10] = (uintptr_t)arg;
  //设置栈指针sp位栈底
  // c->gpr[2] = (uintptr_t)kstack.end; 
  return c;

}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
