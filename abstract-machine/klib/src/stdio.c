#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdint.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
#define MAXDEC 64
static char *__out;
void sputch(char ch){*__out++ = ch;}



int vprintf( void(*gputch)(char) , const char *fmt, va_list ap){
	int i;
	bool in_format = false;
	int long_flags = 0;
	int pos = 0;
	for( ;*fmt != '\0';fmt++){
		if(*fmt != '%' && in_format == false){
			gputch(*fmt);pos++;
		}
		else{
			if(in_format == false && (*fmt == '%')){
				fmt++;
				in_format = true;
			}
			switch(*fmt){
				case 'l':  //para
					long_flags += 1;
					break;
				case 's':  //%s
					char *s;
					assert(long_flags == 0);
					s = va_arg(ap , char *);
					for(i = 0; s[i] != '\0'; i++){
						gputch(s[i]);pos++;
					}
					in_format = false;
					break;
				case 'c':  //%c
					int c;
					assert(long_flags == 0);
					c = va_arg(ap , int);
					gputch((char)c);pos++;
					in_format = false;
					break;
				case 'd':{//%d
					assert(long_flags <= 2);
					int64_t d = 0;
					if(long_flags == 2)    //get d
						d = va_arg(ap , int64_t);
					else
						d = va_arg(ap , int32_t);

					if(d < 0){
						d = -d;
						gputch('-');pos++;
					}
					if(d == 0){
						gputch('0');pos++;
					};
					char invert[MAXDEC];
					i = 0;
					for( ; d != 0 ; i++ , d/=10){
						invert[i] = d%10 + '0';
					}
					for(i-=1 ;i >= 0 ; i--){
						gputch(invert[i]);pos++;
					}
					long_flags = 0;
					in_format = false;
					break;
					}
				case 'u':{  //%u
					uint64_t u = 0;
					assert(long_flags <= 2);
					if(long_flags == 2)    //get d
						u = va_arg(ap , uint64_t);
					else
						u = va_arg(ap , uint32_t);

					if(u == 0){
						gputch('0');pos++;
					};
					char invert[MAXDEC];
					i = 0;
					for( ; u != 0 ; i++ , u/=10){
						invert[i] = u%10 + '0';
					}
					for(i-=1 ;i >= 0 ; i--){
						gputch(invert[i]);pos++;
					}
					long_flags = 0;
					in_format = false;
					break;
					}
				case '%':
					gputch('%');
					in_format = false;
					break;
			}
		}
	}
	return pos;
}

int printf(const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	int res = vprintf(putch , fmt , ap);
	va_end(ap);
	return res;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	__out = out;
	int res = vprintf(sputch , fmt , ap);
	sputch('\0');
	va_end(ap);
	return res++;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}
// int vsprintf(char *out, const char *fmt, va_list args) {
//     char *out_start = out;
//     while (*fmt) { // 遍历格式字符串fmt
//         if (*fmt == '%') { // 搜寻占位符%
//             fmt++;
//             switch (*fmt) {
//                 case 's': { // %s 若为%s
//                     char *s = va_arg(args, char *);
//                     while (*s) {
//                         *out++ = *s++;
//                     }
//                     break;
//                 }
//                 case 'd': { // %d 十进制整数
//                     int width = 0;
//                     char fill = ' ';
//                     // 处理宽度和填充字符
//                     if (*(fmt - 1) == '0') {
//                         fill = '0';
//                         width = (*(fmt - 2) - '0') * 10 + (*(fmt - 1) - '0');
//                     } else if (*(fmt - 1) >= '1' && *(fmt - 1) <= '9') {
//                         width = (*(fmt - 1) - '0');
//                     }

//                     int d = va_arg(args, int);
//                     int d_tmp = d;
//                     char buf[20];
//                     char *tmp = buf;
//                     int length = 0;
//                     int negative = 0;
//                     if (d == 0) {
//                         *tmp++ = '0';
//                         *tmp = '\0';
//                         length = 1;
//                     } else {
//                         if (d < 0) {
//                             negative = 1;
//                             d = -d;
//                         }
//                         while (d_tmp != 0) {
//                             length++;
//                             d_tmp /= 10;
//                         }
//                         for (int i = length - 1; i >= 0; i--) {
//                             tmp[i] = d % 10 + '0';
//                             d /= 10;
//                         }
//                         tmp += length;
//                         *tmp = '\0';
//                     }

//                     int total_length = length + negative;
//                     if (width > total_length) {
//                         int fill_count = width - total_length;
//                         if (negative) {
//                             *out++ = '-';
//                         }
//                         for (int i = 0; i < fill_count; i++) {
//                             *out++ = fill;
//                         }
//                         tmp = buf + (negative ? 1 : 0);
//                     } else {
//                         if (negative) {
//                             *out++ = '-';
//                         }
//                         tmp = buf;
//                     }

//                     while (*tmp) {
//                         *out++ = *tmp++;
//                     }
//                     break;
//                 }


//                 case 'u': { // %u 无符号整数
//                     uint32_t d = va_arg(args, uint32_t);
//                     char buf[20];
//                     char *tmp = buf;
//                     if (d == 0) {
//                         *tmp++ = '0';
//                         *tmp = '\0';
//                     } else {
//                         int length = 0;
//                         uint32_t d_tmp = d;
//                         while (d_tmp != 0) {
//                             length++;
//                             d_tmp /= 10;
//                         }
//                         for (int i = length - 1; i >= 0; i--) {
//                             tmp[i] = d % 10 + '0';
//                             d /= 10;
//                         }
//                         *(tmp + length) = '\0';
//                     }
//                     while (*tmp) {
//                         *out++ = *tmp++;
//                     }
//                     break;
//                 }
//                 case 'p': { // %p 指针
//                     void *p = va_arg(args, void *);
//                     uintptr_t ptr_val = (uintptr_t)p;
//                     *out++ = '0';
//                     *out++ = 'x';
//                     char buf[20];
//                     char *tmp = buf + sizeof(buf) - 1;
//                     *tmp = '\0';
//                     do {
//                         unsigned char digit = ptr_val % 16;
//                         *(--tmp) = digit < 10 ? digit + '0' : digit - 10 + 'a';
//                         ptr_val /= 16;
//                     } while (ptr_val != 0);
//                     while (*tmp) {
//                         *out++ = *tmp++;
//                     }
//                     break;
//                 }
//                 case 'c': { // %c 字符
//                     char c = (char)va_arg(args, int);
//                     *out++ = c;
//                     break;
//                 }
//                 case 'l': { // %l 长整数
//                     long l = va_arg(args, long);
//                     char buf[30];
//                     char *tmp = buf;
//                     int negative = 0;
//                     if (l == 0) {
//                         *tmp++ = '0';
//                         *tmp = '\0';
//                     } else {
//                         if (l < 0) {
//                             negative = 1;
//                             l = -l;
//                             *tmp++ = '-';
//                         }
//                         char *end = tmp + sizeof(buf) - 2;
//                         while (l != 0 && tmp < end) {
//                             *tmp++ = l % 10 + '0';
//                             l /= 10;
//                         }
//                         *tmp = '\0';
//                         char *start = buf + negative;
//                         char *endptr = tmp - 1;
//                         while (start < endptr) {
//                             char ch = *start;
//                             *start = *endptr;
//                             *endptr = ch;
//                             start++;
//                             endptr--;
//                         }
//                     }
//                     tmp = buf;
//                     while (*tmp) {
//                         *out++ = *tmp++;
//                     }
//                     break;
//                 }
//                 case '%': // %%
//                     *out++ = '%';
//                     break;
//                 default:
//                     *out++ = '%';
//                     *out++ = *fmt;
//                     break;
//             }
//         } else {
//             *out++ = *fmt; // 非格式符部分直接复制即可
//         }
//         fmt++;
//     }
//     *out = '\0';
//     return out - out_start;
// }

// int sprintf(char *out, const char *fmt, ...) {
//     va_list args; //定义stdarg.h的变量，用于访问可变参数列表
//     va_start(args,fmt);//初始化args
//     while(*fmt){ //遍历格式字符串fmt
//       if(*fmt == '%'){   //搜寻占位符%
//           fmt++;
//           switch(*fmt){
//             case 's':    //%s 若为%s
//               char  *s = va_arg(args, char*);
//               while(*s){
//                 *out++ = *s++;
//               }
//               break;
//             case 'd': //%d 十进制整数
//                int d = va_arg(args,int);
//                int d_tmp = d;
//                char buf[20];
//                char *tmp = buf;
//                int length =0;
//                int negative = 0;
//                if(d == 0){
//                 *tmp++= '0';
//                 *tmp ='\0';}
//                else{
//                 while(d_tmp != 0){
//                   length++;
//                   d_tmp /= 10;
//                 }
//                 if(d < 0){
//                   negative = 1;
//                   d = -d;
//                   *(tmp) = '-';
//                   }
//                 for(int i = length - 1; i >= 0; i--){
//                   tmp[i+negative] = d % 10 + '0';
//                   d /= 10;
//                 }
//                 *(tmp+length) = '\0';
//                }
//                //itoa(d,tmp);
//                while(*tmp){
//                 *out++ = *tmp++;
//                }
//                break;
//             case '%':
//               *out++ = '%';
//               *out++ = *fmt;
//               break;
//             // case 'u':
//             //   uint32_t d = va_arg(args,uint32_t);
//             //   char buf[20];
//             //   char *tmp = buf;
//             //   id(d == 0){
//             //     *tmp++ = '0';
//             //     *tmp = '\0';
//             //   }else{
//             //     int length = 0;
//             //     uint32_t d_tmp = d;
//             //   }



//             default:
//               *out++ = '%';
//               *out++ = *fmt;
//               break;
//           }
//       }else{
//         *out++ = *fmt;  //非格式符部分直接复制即可
//       }
//       fmt++;
//   }
//   *out = '\0';
//   va_end(args);
//   return 0;
// }

// // int vprintf( void(*gputch)(char) , const char *fmt, va_list ap){
// // 	int i;
// // 	bool in_format = false;
// // 	int long_flags = 0;
// // 	int pos = 0;
// // 	for( ;*fmt != '\0';fmt++){
// // 		if(*fmt != '%' && in_format == false){
// // 			gputch(*fmt);pos++;
// // 		}
// // 		else{
// // 			if(in_format == false && (*fmt == '%')){
// // 				fmt++;
// // 				in_format = true;
// // 			}
// // 			switch(*fmt){
// // 				case 'l':  //para
// // 					long_flags += 1;
// // 					break;
// // 				case 's':  //%s
// // 					char *s;
// // 					assert(long_flags == 0);
// // 					s = va_arg(ap , char *);
// // 					for(i = 0; s[i] != '\0'; i++){
// // 						gputch(s[i]);pos++;
// // 					}
// // 					in_format = false;
// // 					break;
// // 				case 'c':  //%c
// // 					int c;
// // 					assert(long_flags == 0);
// // 					c = va_arg(ap , int);
// // 					gputch((char)c);pos++;
// // 					in_format = false;
// // 					break;
// // 				case 'd':{//%d
// // 					assert(long_flags <= 2);
// // 					int64_t d = 0;
// // 					if(long_flags == 2)    //get d
// // 						d = va_arg(ap , int64_t);
// // 					else
// // 						d = va_arg(ap , int32_t);

// // 					if(d < 0){
// // 						d = -d;
// // 						gputch('-');pos++;
// // 					}
// // 					if(d == 0){
// // 						gputch('0');pos++;
// // 					};
// // 					char invert[MAXDEC];
// // 					i = 0;
// // 					for( ; d != 0 ; i++ , d/=10){
// // 						invert[i] = d%10 + '0';
// // 					}
// // 					for(i-=1 ;i >= 0 ; i--){
// // 						gputch(invert[i]);pos++;
// // 					}
// // 					long_flags = 0;
// // 					in_format = false;
// // 					break;
// // 					}
                
// // 				case 'u':{  //%u
// // 					uint64_t u = 0;
// // 					assert(long_flags <= 2);
// // 					if(long_flags == 2)    //get d
// // 						u = va_arg(ap , uint64_t);
// // 					else
// // 						u = va_arg(ap , uint32_t);

// // 					if(u == 0){
// // 						gputch('0');pos++;
// // 					};
// // 					char invert[MAXDEC];
// // 					i = 0;
// // 					for( ; u != 0 ; i++ , u/=10){
// // 						invert[i] = u%10 + '0';
// // 					}
// // 					for(i-=1 ;i >= 0 ; i--){
// // 						gputch(invert[i]);pos++;
// // 					}
// // 					long_flags = 0;
// // 					in_format = false;
// // 					break;
// // 					}
// // 				case '%':
// // 					gputch('%');
// // 					in_format = false;
// // 					break;
// // 			}
// // 		}
// // 	}
// // 	return pos;
// // }

// #define HEXDIGITS "0123456789abcdef"
// int vprintf(void(*gputch)(char), const char *fmt, va_list ap) {
//     int i;
//     bool in_format = false;
//     int long_flags = 0;
//     int pos = 0;

//     for (; *fmt != '\0'; fmt++) {
//         if (*fmt != '%' && !in_format) {
//             gputch(*fmt); pos++;
//         } else {
//             if (!in_format && (*fmt == '%')) {
//                 fmt++;
//                 in_format = true;
//             }

//             switch (*fmt) {
//                 case 'l':  // long flag
//                     long_flags++;
//                     break;
                
//                 case 's': { // %s
//                     char *s = va_arg(ap, char *);
//                     assert(long_flags == 0);
//                     for (i = 0; s[i] != '\0'; i++) {
//                         gputch(s[i]); pos++;
//                     }
//                     in_format = false;
//                     break;
//                 }
                
//                 case 'c': { // %c
//                     int c = va_arg(ap, int);
//                     assert(long_flags == 0);
//                     gputch((char)c); pos++;
//                     in_format = false;
//                     break;
//                 }
                
//                 case 'd': { // %d
//                     int64_t d = 0;
//                     if (long_flags == 2) {
//                         d = va_arg(ap, int64_t);
//                     } else {
//                         d = va_arg(ap, int32_t);
//                     }
                    
//                     if (d < 0) {
//                         gputch('-'); pos++;
//                         d = -d;
//                     }
                    
//                     if (d == 0) {
//                         gputch('0'); pos++;
//                     } else {
//                         char invert[MAXDEC];
//                         i = 0;
//                         while (d != 0) {
//                             invert[i++] = d % 10 + '0';
//                             d /= 10;
//                         }
//                         while (--i >= 0) {
//                             gputch(invert[i]); pos++;
//                         }
//                     }
//                     long_flags = 0;
//                     in_format = false;
//                     break;
//                 }
                
//                 case 'u': { // %u
//                     uint64_t u = 0;
//                     if (long_flags == 2) {
//                         u = va_arg(ap, uint64_t);
//                     } else {
//                         u = va_arg(ap, uint32_t);
//                     }
                    
//                     if (u == 0) {
//                         gputch('0'); pos++;
//                     } else {
//                         char invert[MAXDEC];
//                         i = 0;
//                         while (u != 0) {
//                             invert[i++] = u % 10 + '0';
//                             u /= 10;
//                         }
//                         while (--i >= 0) {
//                             gputch(invert[i]); pos++;
//                         }
//                     }
//                     long_flags = 0;
//                     in_format = false;
//                     break;
//                 }

//                 case 'p': { // %p
//                     uintptr_t p = (uintptr_t)va_arg(ap, void *);
//                     gputch('0'); pos++;
//                     gputch('x'); pos++;
//                     for (i = (sizeof(p) * 2) - 1; i >= 0; i--) {
//                         gputch(HEXDIGITS[(p >> (i * 4)) & 0xF]);
//                         pos++;
//                     }
//                     in_format = false;
//                     break;
//                 }

//                 case 'x': { // %x
//                     uint64_t x = 0;
//                     if (long_flags == 2) {
//                         x = va_arg(ap, uint64_t);
//                     } else {
//                         x = va_arg(ap, uint32_t);
//                     }
                    
//                     if (x == 0) {
//                         gputch('0'); pos++;
//                     } else {
//                         char hex[MAXDEC];
//                         i = 0;
//                         while (x != 0) {
//                             hex[i++] = HEXDIGITS[x % 16];
//                             x /= 16;
//                         }
//                         while (--i >= 0) {
//                             gputch(hex[i]); pos++;
//                         }
//                     }
//                     long_flags = 0;
//                     in_format = false;
//                     break;
//                 }
                
//                 case '%': // %%
//                     gputch('%'); pos++;
//                     in_format = false;
//                     break;
                
//                 default:
//                     // Handle unexpected format specifiers
//                     in_format = false;
//                     break;
//             }
//         }
//     }
//     return pos;
// }
// int printf(const char *fmt, ...) {
// 	va_list ap;
// 	va_start(ap, fmt);
// 	int res = vprintf(putch , fmt , ap);
// 	va_end(ap);
// 	return res;
// }
// int snprintf(char *out, size_t n, const char *fmt, ...) {
//   panic("Not implemented");
// }

// int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
//   panic("Not implemented");
// }

#endif
