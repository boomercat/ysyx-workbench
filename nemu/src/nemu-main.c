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
 /* 
  bool success = 1; //if test the expression ,cancel this
  FILE *fp;
   fp = fopen("/home/white/ysyx-workbench/nemu/tools/gen-expr/build/input","r");
  if (fp == NULL){
    return EXIT_FAILURE;
  }
  char line[1024] = {};
  char buffer[1024]= {};
    while (fgets(line, sizeof(line), fp) != NULL) {  
    //printf("line is %s",line); 
    strtok(line," ");
    //printf("line is %s",line);
    strcpy(line,strtok(NULL," "));
    printf("\n change line is %s \n",line);
    strcpy(buffer,line);
    word_t result = expr(buffer,&success);
    printf("\nresult is %u\n",result);
    }     
    
  printf("test"); */
#endif

  /* Start engine. */
  engine_start();
  //fclose(fp);

  return is_exit_status_bad();
}
    
