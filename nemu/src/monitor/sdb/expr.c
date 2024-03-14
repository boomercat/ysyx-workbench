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
  TK_NOTYPE = 256, TK_EQ,TK_LBR,TK_RBR,TK_XIEXIAN,
  TK_MUL,TK_SUB,TK_NUM,TK_PLUS

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\(", TK_LBR},          // left bracket
  {"\\)", TK_RBR},         //right bracket
  {"\\/", TK_XIEXIAN},         //我也不会英文
  {"\\*", TK_MUL},         //mutiple
  {"\\-", TK_SUB},          //minus
  {"\\d+",TK_NUM},        //integrity
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

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
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
          case TK_XIEXIAN:
          case TK_MUL:
          case TK_SUB:
          case TK_PLUS:
                      tokens[nr_token].type = rules[i].token_type;
          case TK_NUM:
                      if (substr_len <= 31)  substr_len = 31;
                      assert(substr_len>32);
                      strncpy(tokens[nr_token].str, substr_start, substr_len);     
                      nr_token++;
                      break;
          default: printf("Unprocess str \n");
        }
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
}
int p,q;

static bool check_parentheses(int p, int q) {
    // 第一个和最后一个括号匹配
    if (tokens[p].type != 258 || tokens[q].type != 258) {
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
static int main_operate(p,q){
  assert(p>q,"error!");



}


  /* TODO: Insert codes to evaluate the expression. */
eval(p,q){
    if (p > q) printf("situation of p and q is error");assert(p > q);
    else if(p == q)  return atoi(tokens[p].str);
    else if(check_parrentheses(p,q) == true)  return eval(p+1,q-1);
    else{
      op = main_operate(p,q)
      val1 = eval(p,op-1);
      val2 = eval(op+1,q);
      switch (op.type)
      {
      case /* constant-expression */:
        /* code */
        break;
      
      default:
        break;
      }
    }
    

  }

  return 0;
}
