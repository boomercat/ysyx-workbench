#include "sdb.h"
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_LBR,TK_RBR,TK_DIV,TK_MUL,TK_SUB,TK_NUM,TK_PLUS,
  TK_HEX,TK_REG,TK_AND,TK_NEQ,TK_DEREF
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  {"\\s", TK_NOTYPE},    // spaces
  {"(0x|0X)\\w+",TK_HEX},    //十六进制;
  {"\\$(\\$0|ra|[sgt]p|t[0-6]|a[0-7]|pc|s([0-9]|1[0-1]))",TK_REG}, //reg 
  {"\\+", TK_PLUS},         // plus
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},       // not equal
  {"\\(", TK_LBR},          // left bracket
  {"\\)", TK_RBR},         //right bracket
  {"&&" , TK_AND},          //val1 && val2
  {"\\/", TK_DIV},         //divide
  {"\\*", TK_MUL},         //mutiple
  {"\\-", TK_SUB},          //minus
  {"\\b[0-9]+\\b",TK_NUM},        //integrity
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

static Token tokens[1024] __attribute__((used)) = {};
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
        printf("this extractive num is %c\n",*substr_start);
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d\n: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        switch (rules[i].token_type) {
          case TK_NOTYPE: break;
          case TK_HEX: if (substr_len > 31)  substr_len = 31;
                      assert(substr_len<32);
                      tokens[useful_num].type = rules[i].token_type;

                      strncpy(tokens[useful_num].str, substr_start+2, substr_len-2);  
                      useful_num += 1;     
                      break;
          case TK_REG:if (substr_len > 31)  substr_len = 31;
                      assert(substr_len<32);
                      tokens[useful_num].type = rules[i].token_type;
                      strncpy(tokens[useful_num].str, substr_start, substr_len);  
                      useful_num += 1;     
                      break;
          case TK_EQ:
          case TK_LBR:
          case TK_RBR:
          case TK_DIV:
          case TK_MUL:
          case TK_AND:
          case TK_SUB: 
          case TK_NEQ:
          case TK_PLUS:
                      tokens[useful_num].type = rules[i].token_type;
                      useful_num += 1; 
                      break;
          case TK_NUM:
                      if (substr_len > 31)  substr_len = 31;
                      assert(substr_len<32);
                      tokens[useful_num].type = rules[i].token_type;
                      strncpy(tokens[useful_num].str, substr_start, substr_len);  
                      useful_num += 1;  
                      //nr_token++;
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


  return true;
}




static bool check_parentheses(int p, int q) {
     // 第一个和最后一个括号匹配
    if (tokens[p].type != TK_LBR || tokens[q].type != TK_RBR) {
        return false;
    }
    int cnt = 0; 
    for (int i = p + 1; i < q; ++i) {
        if (tokens[i].type == TK_LBR) cnt++;
        else if (tokens[i].type == TK_RBR) {
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
int main_num;
//计算p和q之间的主运算符函数
int main_operate(int p,int q){
  int locate = 0;
  //printf("test the main_operate function");
  int tmp = p;
  while(tmp < q){
    if((tokens[tmp].type == TK_LBR)){
      /*
      while( tokens[tmp].type != TK_RBR){
        tmp++;
      }*/
      int cnt_brk = 1;
      while(cnt_brk != 0){
        tmp++;
        if(tokens[tmp].type == TK_LBR){
          cnt_brk++;
        }
        else if(tokens[tmp].type == TK_RBR){
          cnt_brk--;
        }
       }
    }
    switch (tokens[tmp].type){
      case TK_DEREF: if((tokens[locate].type != TK_PLUS) && (tokens[locate].type !=TK_SUB) &&
                        (tokens[locate].type !=TK_MUL) &&(tokens[locate].type !=TK_DIV)){
                          locate = tmp;
                        } 
                        break;
      case TK_DIV: if ((tokens[locate].type != TK_PLUS)&&tokens[locate].type !=TK_SUB) {
                   locate = tmp;}
                   break;
      case TK_MUL: if ((tokens[locate].type != TK_PLUS)&&tokens[locate].type != TK_SUB) {
                   locate = tmp;}
                   break;
      case TK_PLUS:locate = tmp;break;
      case TK_SUB:locate = tmp;break;
      case TK_EQ:locate = tmp;break;
      default: break;
    }  
    tmp++;
    main_num = locate;
  }
  return main_num;
}


  /* TODO: Insert codes to evaluate the expression. */
word_t eval(int p,int q,bool *success){
  int op;
  //printf("test the eval function");
    if (p>q) {printf("situation of p and q is error");
                *success = false;
                assert(p > q);
    }
    else if(p == q)  {                    //定位到 具体的一个str时，要判断其类型然后根据类型进行return
        if(tokens[p].type == TK_NUM)  return  strtol(tokens[p].str,NULL,10); //atoi(tokens[p].str);
        else if(tokens[p].type == TK_HEX) return  strtol(tokens[p].str,NULL,16);
        else if(tokens[p].type == TK_REG) {
          word_t num; bool t = true;
          num = isa_reg_str2val(tokens[p].str,&t);
          if(!t) {num = 0;}
          return num;
        }
        
    } 
    else if(check_parentheses(p,q) == true)  return eval(p+1,q-1,success);  //检查括号匹配
    else{
    op = main_operate(p,q);   //寻找主要运算式
    /*
    word_t val2 = eval(op+1,q,success);  
    if(tokens[op].type == TK_DEREF){
      return paddr_read(val2,4);   //如果解运算符的话进行解运算，其中需要解的表达式肯定在”*“的后面。
    }
    word_t val1 = eval(p,op-1,success); */
    word_t val1 = (op==0) ?  0 : eval(p,op-1,success);
    word_t val2 = eval(op+1,q,success);
    switch (tokens[op].type)
    {
      case TK_DEREF: return paddr_read(val2,4);
      case TK_PLUS: return  val1 + val2;
      case TK_SUB: return val1 - val2;
      case TK_MUL: return val1 * val2;
      case TK_DIV: if (val2 == 0) {
                      printf("divide ZERO!");
                      *success = false;
                      return false;
                      }     
                   else  return (sword_t)val1 / (sword_t)val2;   //先转换成有符号数，否则会出现错误
      case TK_EQ  : return (val1 == val2);
      case TK_NEQ : return (val1 != val2);
      case TK_AND : return (val1 && val2);
      default:  *success = false;
                assert(0);

      }
    }
  return 0;
}

word_t expr(char *e, bool *success) {
  printf("this is one\n");
  if (!make_token(e)) {
    printf("shibai!!\n");
    *success = false;
    return 0;
  }
  else{
  printf("access the expr function\n");
  /* TODO: Insert codes to evaluate the expression. */
  for (int j = 0; j < useful_num; j ++) { //judge the * is mul or other
  if (tokens[j].type == TK_MUL && (j == 0 || (tokens[j - 1].type == TK_PLUS) || (tokens[j - 1].type == TK_SUB) ||
   (tokens[j - 1].type == TK_MUL) || (tokens[j - 1].type == TK_DIV))) {
    tokens[j].type = TK_DEREF;
  }
} 
/*
  for(int j = 0;j<useful_num;j++){
    printf("the %d tokens type is %d",j,tokens[j].type);
  }*/

   return   eval(0,useful_num-1,success);

  }
}