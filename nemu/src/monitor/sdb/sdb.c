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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_info(char *args){
  char *ar = strtok(args," ");
  if (*ar == 'r')
  {
    isa_reg_display();
   }
   /*
  else if (*ar == 'w')
  {
    
  }*/
  printf("%s" ,ar);
  return 0;
}
static int cmd_x(char *args){
 /* 
  int num_a = atoi(strtok(args," "));
  paddr_t addr = strtoul(strtok(NULL," "),NULL, 0); // 32位
  //printf(" %x \n %d this is a test",addr,num_a);
  for (int i = 0; i < num_a; i++)
  {
    printf("0x%x:%08x\n",addr,paddr_read(addr,4));
    addr += 4;
  }
  return 0; */
  if (args == NULL) {
        printf("Wrong Command!\n");
        return 0;
  }                                                                           
	int N;
  uint32_t startAddress;
	sscanf(args,"%d%x",&N,&startAddress);
	for (int i = 0;i < N;i ++){
      printf("0x%x:%08x\n", startAddress,paddr_read(startAddress,4));
      //C语言会自动执行类型提升以匹配表达式的操作数的类型。所以，4 被转换为 uint32_t，
      startAddress += 4;
  
  }
   return 0;

}

static int cmd_si(char *args){
 /* strtok(args," ");
  char* num = strtok(NULL," ");*/
  int num_exe;
  if (args == NULL)
  {
    num_exe = 1;
  }
  else num_exe = atoi(args);
  cpu_exec(num_exe);
  return 0;
}
static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "execute N commands and suspend, default N = 1", cmd_si},
  { "info", "r is print the status of  monitor,w is print watchpoint's information",cmd_info},
  { "x", "calculate the value of EXPR,and the result as the  start memory address,output permanet N 4bits in 0x",cmd_x},

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
       if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { 
          if(strcmp(cmd, "q") == 0){
            nemu_state.state = NEMU_QUIT; 
            }
        return ;
        }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
