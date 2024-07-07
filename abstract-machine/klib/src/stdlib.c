#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;
static uint8_t* addr = NULL;


int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}
// #ifndef ITOA_DEFINED
// #define ITOA_DEFINED
// int itoa(int value, char *str, int base) {
//     char *ptr = str, *ptr1 = str, tmp_char;
//     int tmp_value;
//     int len = 0;
//     // 处理负数情况，只针对10进制有效
//     if (value < 0 && base == 10) {
//         *ptr++ = '-';
//         value = -value;
//         len++;
//     }
//     tmp_value = value;
//     // 将整数转换为指定进制的字符串
//     do {
//         int rem = tmp_value % base;
//         *ptr++ = (rem < 10) ? (rem + '0') : (rem - 10 + 'a');
//         len++;
//     } while (tmp_value /= base);

//     *ptr = '\0';
//     // 反转字符串
//     if (str[0] == '-') {
//         ptr1++;
//     }
//     while (ptr1 < --ptr) {
//         tmp_char = *ptr;
//         *ptr = *ptr1;
//         *ptr1 = tmp_char;
//     }
//     return len;
// }
// #endif

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  if(addr == NULL){
    addr = heap.start;
  }
  size = (size_t)ROUNDUP(size,8);
  uint8_t *old = addr;
  addr += size;
  assert((uintptr_t)heap.start <= (uintptr_t)addr && (uintptr_t)addr < (uintptr_t)heap.end);
  for (uint8_t *p = (uint8_t *)old; p !=(uint8_t *)addr;p++)
  {
    *p = 0;
  }
  return old;
}
#endif

// }t*)heap.end) return NULL;
//   void *ret = p;
//   p += size;
//   return ret;

// }

void free(void *ptr) {
}

#endif
