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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_LBR,TK_RBR,TK_DIV,TK_MUL,TK_SUB,TK_NUM,TK_PLUS

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {"\\s", TK_NOTYPE},    // spaces
  {"\\+", TK_PLUS},         // plus
  {"==", TK_EQ},        // equal
  {"\\(", TK_LBR},          // left bracket
  {"\\)", TK_RBR},         //right bracket
  {"\\/", TK_DIV},         //我也不会英文
  {"\\*", TK_MUL},         //mutiple
  {"\\-", TK_SUB},          //minus
  {"\\w",TK_NUM},        //integrity
};

#define NR_REGEX ARRLEN(rules)
static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[128] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
static int useful_num;
//识别其中的token，传入要识别的token（buf）
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  nr_token = 0;
  useful_num = 0;
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        printf("this extractive num is %c",*substr_start);
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        switch (rules[i].token_type) {
          case TK_NOTYPE: break;
          case TK_EQ:
          case TK_LBR:
          case TK_RBR:
          case TK_DIV:
          case TK_MUL:
          case TK_SUB:
          case TK_PLUS:
                      tokens[nr_token].type = rules[i].token_type;
                      printf("the type is %d \n",tokens[nr_token].type);
                      useful_num += 1;  
                      break;
          case TK_NUM:
                      if (substr_len > 31)  substr_len = 31;
                      assert(substr_len<32);
                      tokens[nr_token].type = rules[i].token_type;
                      strncpy(tokens[nr_token].str, substr_start, substr_len);   
                      printf("the type is %d \n",tokens[nr_token].type);                        
                      nr_token++;
                      useful_num += 1;
                      break;
            
          default: printf("Unprocess str %c \n",e[position]);
        }
        

        break;
      }
    }

    if (i == NR_REGEX ) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }


  }
  printf("successful!!,useful_num is %d",useful_num);
  return true;
}




static bool check_parentheses(int p, int q) {
     // 第一个和最后一个括号匹配
    if (tokens[p].type != '(' || tokens[q].type != ')') {
        return false;
    }
    int cnt = 0; 
    for (int i = p + 1; i < q; ++i) {
        if (tokens[i].type == '(') cnt++;
        else if (tokens[i].type == ')') {
            cnt--;
            if (cnt < 0) return false;
        }
    }
    // 如果遍历完毕后级别不为0，说明左括号多于右括号
    if (cnt != 0) {
        return false;
    }
    return true;
}

//计算p和q之间的主运算符函数
static int main_operate(int p,int q){
  int locate = 0;
  printf("test the main_operate function");
  int tmp = p;
  while(tmp < q){
    //printf("tokens type is %d",tokens[p].type);
    while(tokens[tmp].type == TK_LBR){
      printf("test the  while function");
      if(tokens[tmp].type == TK_RBR) break;
      tmp++;
    }
    switch (tokens[tmp].type){
      case TK_RBR: 
      case TK_NUM: break;
      case TK_DIV: if ((tokens[locate].type != TK_PLUS)||tokens[locate].type !=TK_SUB) {
                   locate = tmp;}
                   break;
      case TK_MUL: if ((tokens[locate].type != TK_PLUS)||tokens[locate].type == TK_SUB) {
                   locate = tmp;}
                   break;
      case TK_PLUS:locate = tmp;break;
      case TK_SUB:locate = tmp;break;
      default: break;
    }  
    tmp++;
  }
  return locate;
}


  /* TODO: Insert codes to evaluate the expression. */
int eval(int p,int q){
  int op,val1,val2;
  printf("test the eval function");
    if (p > q) {printf("situation of p and q is error");
                assert(p > q);
    }
    else if(p == q)  return atoi(tokens[p].str);
    else if(check_parentheses(p,q) == true)  return eval(p+1,q-1);
    else{
      op = main_operate(p,q);
      val1 = eval(p,op-1);
      val2 = eval(op+1,q);  
      switch (tokens[op].type)
      {
      case '+':  return  val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: assert(0);
      }
    }
    

  

  return 0;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    printf("shibai!!\n");
    *success = false;
    return 0;
  }
  else{
  /* TODO: Insert codes to evaluate the expression. */
  printf("this is  e %s",e);
  eval(0,useful_num-1);
  return true;

  }
}