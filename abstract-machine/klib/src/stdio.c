#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  va_list args;
  va_start(args,fmt);
  while(*fmt){
    putch(*fmt);
    fmt++;
  }
  va_end(args);
  return 0;
 }

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
    va_list args; //定义stdarg.h的变量，用于访问可变参数列表
    va_start(args,fmt);//初始化args
    while(*fmt){ //遍历格式字符串fmt
      if(*fmt == '%'){   //搜寻占位符%
          fmt++;
          switch(*fmt){
            
            case 's':    //%s 若为%s
              char  *s = va_arg(args, char*);
              while(*s){
                *out++ = *s++;
              }
              break;
            case 'd': //%d 十进制整数
               int d = va_arg(args,int);
               int d_tmp = d;
               char buf[20];
               char *tmp = buf;
               int length =0;
               int negative = 0;
               if(d == 0){
                *tmp++= '0';
                *tmp ='\0';}
               else{
                while(d_tmp != 0){
                  length++;
                  d_tmp /= 10;
                }
                if(d < 0){
                  negative = 1;
                  d = -d;
                  *(tmp) = '-';
                  }
                for(int i = length - 1; i >= 0; i--){
                  tmp[i+negative] = d % 10 + '0';
                  d /= 10;
                }
                *(tmp+length) = '\0';
               }
               //itoa(d,tmp);
               while(*tmp){
                *out++ = *tmp++;
               }
               break;
            case '%':
              *out++ = '%';
              *out++ = *fmt;
              break;
            default:
              *out++ = '%';
              *out++ = *fmt;
              break;
          }
      }else{
        *out++ = *fmt;  //非格式符部分直接复制即可
      }
      fmt++;
  }
  *out = '\0';
  va_end(args);
  return 0;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
