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
#include <common.h> 
#include "monitor/sdb/sdb.h"
#include <string.h>
#include <stdio.h>
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
  FILE *fp;
  bool *success = false;
  fp = fopen("/home/white/ysyx-workbench/nemu/tools/gen-expr/build/input","r");
  if (fp == NULL){
    return EXIT_FAILURE;
  }
  char line[1024]={};
  char buffer[1024]= {};
    while (fgets(line, sizeof(line), fp) != NULL) {   
    //char *e = NULL;
    //e = strchr(line, ' ');
    strcpy(buffer,strtok(NULL," "));
    printf("this buffer is %s",buffer);
    //if (e != NULL) {
     // e += 1;
    word_t result = expr(buffer,success);
    if (success) {
      printf("calcuate successful,result is %d\n ",result);
    }
    else printf("defeat");
    }      
    
  
#endif

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
    
