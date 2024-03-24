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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  char *str;
  word_t expr_value;
  struct watchpoint *next;
  /* TODO: Add more members if necessary */
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].str = (char *)malloc(strlen("null") + 1);
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    //wp_pool[i].front = (i ==  0 ? NULL : &wp_pool[i - 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp(){
  if (free_ == NULL){
    printf("watchpoint is full");
    assert(0);
  }
  WP *Wpoint = free_;
  free_ = free_->next;
  Wpoint->next = head;
  head = Wpoint;
  return Wpoint;
}

//free a watchpoint to free_

void free_wp(WP *wp){
  if (wp == NULL){
    printf("this is a void point");
    assert(0);
  }
  else if(wp == head && wp->next != NULL){
    head = wp->next;
    wp->next = free_;
    free_ = wp;
  }
  else if(wp == head && wp->next == NULL){
    wp->next = free_;
    free_ = wp;
    head = NULL;
  }
  else{
      WP *tmp = head;
      while(tmp->next != NULL){
        if(tmp->next == wp) {break;} 
        tmp = tmp->next;
      }
      if(tmp->next != wp){assert(0);}
      tmp->next = wp->next;
      wp->next = free_;
      free_ = wp;
  }

  
}
//build a new watchpoint and copy expression's value to watchpoint
void set_WP(char *args,word_t value){
  WP *point = new_wp();
  point->expr_value = value;
  point->str = strdup(args);
  //strcpy(point->str,args);
  printf("watchpoint value is %d,expression is %s",point->expr_value,point->str);
}

// scan all watchpoint
void scan_wp(){
  WP *s_point = head;
  while(s_point->next != NULL){
    bool *success = false;
    word_t new_result = expr(s_point->str,success);
    if(new_result !=  s_point->expr_value){
      printf("the watchpoint NO %d expression's %s value  is changed\n",s_point->NO,s_point->str);
      printf("new value is %d",new_result);
      s_point->expr_value = new_result;
      nemu_state.state = NEMU_STOP;
    }
    s_point = s_point->next;
  }
}

//print all watchpoint
void display_watchpoint(){
  WP *tmp1 = head;
  if(tmp1==NULL){printf("point is NULL");}
  else {
    while(tmp1 != NULL){
    printf("point %d:  %s  : %d\n",tmp1->NO,tmp1->str,tmp1->expr_value);
    tmp1 = tmp1->next;
    }
  }
}
/*
void delete_point(int num){
  WP *tmp1 = head;
   if(tmp1 == NULL){printf("point not exist");
                  return ;}
  else {
    printf("tmp1.NO is %d\n",tmp1->NO);
    while(tmp1->NO != num){
    tmp1 = tmp1->next;
    }
    if(tmp1 == NULL){printf("the point is NULL");}
    else{ 
    printf("delete successful! delete point's num is %d",tmp1->NO);
    free(tmp1);
    }
  }
}
*/
void delete_point(int n)  //delete the watchpoint, its NO is n.
{
  WP *tmp = head;
  if(tmp == NULL)
    printf("The watchpoint for which NO is %d does't exist.\n", n);
  else
  {
    while(tmp->NO != n)
      tmp = tmp->next;
    if(tmp == NULL)
      printf("The watchpoint for which NO is %d does't exist.\n", n);
    else
    {
      free_wp(tmp);
      printf("Deleted success\n");
    }
  }
}
