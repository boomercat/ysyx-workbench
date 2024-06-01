
// #include <am.h>
// #include <klib.h>
// #include <klib-macros.h>
// #include <stdarg.h>
// #include <math.h>

// #if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// #define BUFSIZE 1024



// static int width_int(int32_t n, int base) {
//     int ret = n < 0 + (base==8?1:(base==16?2:0));
//     do ++ret; while ((n /= base) != 0);
//     return ret;
// }

// static int width_uint(uint32_t n, int base) {
//     int ret = base==8?1:(base==16?2:0);
//     do ++ret; while ((n /= base) != 0);
//     return ret;
// }

// static void out_int(char *out, int32_t n, int base, int width) {
//     int prefix = 0;
//     if (n < 0) {
//         out[prefix] = '-';
//         n = -n;
//         ++prefix;
//     }
//     if (base == 8) {
//         out[prefix++] = '0';
//     } else if (base == 16) {
//         out[prefix++] = '0';
//         out[prefix++] = 'x';
//     }
//     prefix += base==8?1:(base==16?2:0);
//     for (int i = width-1; i >= prefix; i--, n /= base) {
//         int digit = n % base;
//         out[i] = (digit>=10)?('a'+digit-10):('0'+digit);
//     }
// }

// static void out_uint(char *out, uint32_t n, int base, int width) {
//     int prefix = 0;
//     if (base == 8) {
//         out[prefix++] = '0';
//     } else if (base == 16) {
//         out[prefix++] = '0';
//         out[prefix++] = 'x';
//     }
//     for (int i = width-1; i >= prefix; i--, n /= base) {
//         int digit = n % base;
//         out[i] = (digit>=10)?('a'+digit-10):('0'+digit);
//     }
// }

// int printf(const char *fmt, ...) {
//   char buffer[BUFSIZE];
//   va_list pArgs;
//   va_start(pArgs, fmt);
//   int ret = vsprintf(buffer, fmt, pArgs);
//   va_end(pArgs);
//   for (int i = 0; i < ret; i++) putch(buffer[i]);
//   return ret;
// }

// int sprintf(char *out, const char *fmt, ...) {
//   va_list pArgs;
//   va_start(pArgs, fmt);
//   int ret = vsprintf(out, fmt, pArgs);
//   va_end(pArgs);
//   return ret;
// }

// int snprintf(char *out, size_t n, const char *fmt, ...) {
//   va_list pArgs;
//   va_start(pArgs, fmt);
//   int ret = vsnprintf(out, n, fmt, pArgs);
//   va_end(pArgs);
//   return ret;
// }

// int vsprintf(char *out, const char *fmt, va_list ap) {
//   return vsnprintf(out, -1, fmt, ap);
// }

// int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
//     char *start = out;
//     bool ps = false; // has meet percent sign '%'
//     --n; // for '\0'
//     char placeholder = ' ';
//     int fmt_width = 0;

//     for (; n && *fmt; ++fmt) {
//         if (!ps) {
//             if (*fmt == '%') ps = true;
//             else {
//                 *out++ = *fmt;
//                 --n;
//             }
//             continue;
//         }
//         switch (*fmt) {
//             case '%': *out++ = *fmt; --n; break;
//             case 'd': {
//                 int32_t arg = va_arg(ap, int32_t);
//                 int arg_width = width_int(arg, 10);
//                 MAKE_BUF;
//                 out_int(buf_start, arg, 10, arg_width);
//                 OUT_BUF;
//                 break;
//             }
//             case 'u': {
//                 uint32_t arg = va_arg(ap, uint32_t);
//                 int arg_width = width_uint(arg, 10);
//                 MAKE_BUF;
//                 out_int(buf_start, arg, 10, arg_width);
//                 OUT_BUF;
//                 break;
//             }
//             case 'x': case 'p': {
//                 uint32_t arg = va_arg(ap, uint32_t);
//                 int arg_width = width_uint(arg, 16);
//                 MAKE_BUF;
//                 out_uint(buf_start, arg, 16, arg_width);
//                 OUT_BUF;
//                 break;
//             }
//             case 's': {
//                 char *arg = va_arg(ap, char*);
//                 int arg_width = strlen(arg);
//                 MAKE_BUF;
//                 strcpy(buf_start, arg);
//                 OUT_BUF;
//                 break;
//             }
//             case 'c': {
//                 char arg = va_arg(ap, int);
//                 *out++ = arg;
//                 --n;
//                 break;
//             }
//             default: {
//                 char c = *fmt;
//                 if (c >= '0' && c <= '9') { // e.g. %09d, %9d, %6s
//                     placeholder = c=='0'?'0':' ';
//                     fmt_width = 0;
//                     if (placeholder == '0') ++fmt;
//                     while (*fmt >= '0' && *fmt <= '9') {
//                         fmt_width *= 10;
//                         fmt_width += *fmt-'0';
//                         ++fmt;
//                     }
//                     --fmt;
//                 }
//                 continue;
//             }
//         }
//         ps = false;
//         fmt_width = 0;
//     }
//     *out++ = '\0';
//     return out-start;
// }

// int puts(const char * str) {
//   for (const char *c = str; *c; c++) putch(*c);
//   putch('\n');
//   return 0;
// }

// #endif

#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  // va_list args;
  // va_start(args,fmt);
  // while(*fmt){
  //   putch(*fmt);
  //   fmt++;
  // }
  // va_end(args);
  // return 0;
    va_list args;
    va_start(args, fmt);
    char buffer[1024]; // 假设缓冲区大小足够大来存放格式化字符串
    vsprintf(buffer, fmt, args); // 使用vsprintf格式化字符串
    va_end(args);

    char *str = buffer;
    while (*str) {
        putch(*str);
        str++;
    }
    return 0;
 }

int vsprintf(char *out, const char *fmt, va_list args) {
    char *out_start = out;
    while (*fmt) { // 遍历格式字符串fmt
        if (*fmt == '%') { // 搜寻占位符%
            fmt++;
            switch (*fmt) {
                case 's': { // %s 若为%s
                    char *s = va_arg(args, char *);
                    while (*s) {
                        *out++ = *s++;
                    }
                    break;
                }
                case 'd': { // %d 十进制整数
                    int width = 0;
                    char fill = ' ';
                    // 处理宽度和填充字符
                    if (*(fmt - 1) == '0') {
                        fill = '0';
                        width = (*(fmt - 2) - '0') * 10 + (*(fmt - 1) - '0');
                    } else if (*(fmt - 1) >= '1' && *(fmt - 1) <= '9') {
                        width = (*(fmt - 1) - '0');
                    }

                    int d = va_arg(args, int);
                    int d_tmp = d;
                    char buf[20];
                    char *tmp = buf;
                    int length = 0;
                    int negative = 0;
                    if (d == 0) {
                        *tmp++ = '0';
                        *tmp = '\0';
                        length = 1;
                    } else {
                        if (d < 0) {
                            negative = 1;
                            d = -d;
                        }
                        while (d_tmp != 0) {
                            length++;
                            d_tmp /= 10;
                        }
                        for (int i = length - 1; i >= 0; i--) {
                            tmp[i] = d % 10 + '0';
                            d /= 10;
                        }
                        tmp += length;
                        *tmp = '\0';
                    }

                    int total_length = length + negative;
                    if (width > total_length) {
                        int fill_count = width - total_length;
                        if (negative) {
                            *out++ = '-';
                        }
                        for (int i = 0; i < fill_count; i++) {
                            *out++ = fill;
                        }
                        tmp = buf + (negative ? 1 : 0);
                    } else {
                        if (negative) {
                            *out++ = '-';
                        }
                        tmp = buf;
                    }

                    while (*tmp) {
                        *out++ = *tmp++;
                    }
                    break;
                }


                //     int d = va_arg(args, int);
                //     int d_tmp = d;
                //     char buf[20];
                //     char *tmp = buf;
                //     int length = 0;
                //     int negative = 0;
                //     if (d == 0) {
                //         *tmp++ = '0';
                //         *tmp = '\0';
                //     } else {
                //         while (d_tmp != 0) {
                //             length++;
                //             d_tmp /= 10;
                //         }
                //         if (d < 0) {
                //             negative = 1;
                //             d = -d;
                //             *(tmp) = '-';
                //         }
                //         for (int i = length - 1; i >= 0; i--) {
                //             tmp[i + negative] = d % 10 + '0';
                //             d /= 10;
                //         }
                //         *(tmp + length + negative) = '\0';
                //     }
                //     while (*tmp) {
                //         *out++ = *tmp++;
                //     }
                //     break;
                // }
                case 'u': { // %u 无符号整数
                    uint32_t d = va_arg(args, uint32_t);
                    char buf[20];
                    char *tmp = buf;
                    if (d == 0) {
                        *tmp++ = '0';
                        *tmp = '\0';
                    } else {
                        int length = 0;
                        uint32_t d_tmp = d;
                        while (d_tmp != 0) {
                            length++;
                            d_tmp /= 10;
                        }
                        for (int i = length - 1; i >= 0; i--) {
                            tmp[i] = d % 10 + '0';
                            d /= 10;
                        }
                        *(tmp + length) = '\0';
                    }
                    while (*tmp) {
                        *out++ = *tmp++;
                    }
                    break;
                }
                case 'p': { // %p 指针
                    void *p = va_arg(args, void *);
                    uintptr_t ptr_val = (uintptr_t)p;
                    *out++ = '0';
                    *out++ = 'x';
                    char buf[20];
                    char *tmp = buf + sizeof(buf) - 1;
                    *tmp = '\0';
                    do {
                        unsigned char digit = ptr_val % 16;
                        *(--tmp) = digit < 10 ? digit + '0' : digit - 10 + 'a';
                        ptr_val /= 16;
                    } while (ptr_val != 0);
                    while (*tmp) {
                        *out++ = *tmp++;
                    }
                    break;
                }
                case 'c': { // %c 字符
                    char c = (char)va_arg(args, int);
                    *out++ = c;
                    break;
                }
                case 'l': { // %l 长整数
                    long l = va_arg(args, long);
                    char buf[30];
                    char *tmp = buf;
                    int negative = 0;
                    if (l == 0) {
                        *tmp++ = '0';
                        *tmp = '\0';
                    } else {
                        if (l < 0) {
                            negative = 1;
                            l = -l;
                            *tmp++ = '-';
                        }
                        char *end = tmp + sizeof(buf) - 2;
                        while (l != 0 && tmp < end) {
                            *tmp++ = l % 10 + '0';
                            l /= 10;
                        }
                        *tmp = '\0';
                        char *start = buf + negative;
                        char *endptr = tmp - 1;
                        while (start < endptr) {
                            char ch = *start;
                            *start = *endptr;
                            *endptr = ch;
                            start++;
                            endptr--;
                        }
                    }
                    tmp = buf;
                    while (*tmp) {
                        *out++ = *tmp++;
                    }
                    break;
                }
                case '%': // %%
                    *out++ = '%';
                    break;
                default:
                    *out++ = '%';
                    *out++ = *fmt;
                    break;
            }
        } else {
            *out++ = *fmt; // 非格式符部分直接复制即可
        }
        fmt++;
    }
    *out = '\0';
    return out - out_start;
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
            // case 'u':
            //   uint32_t d = va_arg(args,uint32_t);
            //   char buf[20];
            //   char *tmp = buf;
            //   id(d == 0){
            //     *tmp++ = '0';
            //     *tmp = '\0';
            //   }else{
            //     int length = 0;
            //     uint32_t d_tmp = d;
            //   }



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
