#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
    const char *sc;
  for (sc = s; *sc != '\0'; ++sc);
  return sc - s;
}

char *strcpy(char *dst, const char *src) {
  char *ret = dst;/*
  for (int  i = 0; src[i] != '\0'; i++)
  {
    dst[i] = src[i];
  }
  return dst;*/
  while((*dst++ = *src++));
  return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *ret = dst;
  while (n && (*dst++ = *src++)) --n;
  while (n--) *dst++ = '\0';
  return ret;
}

char *strcat(char *dst, const char *src) {
  strcpy(dst+strlen(dst),src);
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  while(*s1 && (*s1 == *s2)){
    s1++ , s2++;
  }
  //大于0，s1所指字符大于s2.小于0，s1所指字符小于s2.
  return *(const unsigned char*)s1 - *(const unsigned char *)s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  if(n == 0){return 0;}
  while(n-- != 0 && *s1 == *s2){
    if(n == 0 || *s1 =='\0') break;
    s1++,s2++;
  }
  return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p = s;
  while(n--) *p++ = (unsigned char) c;
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  char *d = dst;
  const char *s = src;
  //src和dst相同或n为0，不需移动内存
  if(d == s || n == 0){return dst;}
  //src在dst之前，则需要从前向后复制
  if(s > d){
    while(n--){
      *d++ = *s++;
    }
  }else{      //dst在src之前，需要从后向前复制
    d += n - 1; //指针挪到需要复制的位置
    s += n - 1;//同上
    while(n--){
      *d-- = *s--; //开始复制
    }  
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  char *d = out;
  const char *s = in;
  while(n--){
    *d++ = *s++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const char *cmp1 = s1;
  const char *cmp2 = s2;
  while(n--){
    if(*cmp1 != *cmp2) return *cmp1 - *cmp2;
      cmp1++,cmp2++;
    }
  return 0;
}

#endif
