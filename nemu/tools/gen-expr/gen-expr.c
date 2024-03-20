/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>


// this should be enough
static char buf[65536] = {};
//char buffer[1024] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s ; \n"
"  printf(\"%%u\", result);\n "
"  return 0; "
"}";

int  choose(int n ){
  return rand() % n ;
}

void gen_num(){
  int i = rand() % 9 + 1; //generate random number
  sprintf(buf, "%d",i);
  /*if(strlen(buf) + strlen(buf_num) < sizeof(buf)){ //check the size of buf
    strcat(buf,buf_num);
  }
  else return;*/
}
void gen_rand_op(){
  char op [2]= {"+-*/"[rand() % 4],'\0'};
  if(strlen(buf) + strlen(op) < sizeof(buf)) //check the size of buf
    strcat(buf,op);
  else return;
}

void gen_rand_expr() {
  switch (choose(3)) {
    case 0: if(buf[strlen(buf) - 1] != ')') gen_num();
            else {
              gen_rand_op(); 
              break;
            }
    /*case 1: if(buf[0] != '\0' && )
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;*/
    case 1: 
              // 避免在操作数之后立即插入左括号，而是在操作符之后插入左括号
      if (buf[0] != '\0' &&  strchr("+-*/", buf[strlen(buf) - 1])){
        strcat(buf, "("); // 将左括号添加到缓冲区末尾
        gen_rand_expr(); // 递归生成随机表达式
        strcat(buf, ")"); // 将右括号添加到缓冲区末尾
        } 
      else {
        gen_rand_expr(); // 递归生成随机表达式
      }
      break;
      default: 
        gen_rand_expr(); // 递归生成随机表达式
        gen_rand_op(); // 生成随机操作符
        gen_rand_expr(); // 递归生成随机表达式
        break;
    }
}
 




int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  printf("test1");
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int k;
  for (k = 0; k < loop; k ++) {
    printf("this is a test");
    //memset(buf,0,sizeof(buf));
    gen_rand_expr();
    //expr(*buffer,1);
    printf("buffer is %s",buf);
    sprintf(code_buf, code_format, buf);
    //strcat(buf,buffer);
    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
