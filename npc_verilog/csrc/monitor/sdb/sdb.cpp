#include <common.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
static int is_batch_mode = false;
void isa_reg_display();
#define NR_CMD ARRLEN(cmd_table)
void init_regex();
void init_wp_pool();
void npc_cpu_exec(uint64_t n);
uint8_t* guest_to_host(paddr_t paddr);



void sdb_set_batch_model(){
    is_batch_mode = true;

}

static int cmd_c(char *args) {
  npc_cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}


static int cmd_si(char *args){
  int num_exe;
  if (args == NULL)
  {
    num_exe = 1;
  }
  else num_exe = atoi(args);
  npc_cpu_exec(num_exe);
  return 0;
}


static int cmd_info(char *args){
  char *ar = strtok(args," ");
  if (*ar == 'r')
  { isa_reg_display();}

  else if (*ar == 'w')
  {  display_watchpoint();}
  
  return 0;
}

static int  cmd_p(char *args){
  printf("%s\n",args);
  
  //char EXPR[1024] = strtog(NULL," ");
  bool success = true;
  word_t result = expr(args,&success);
  printf("result is %p\n",result);
  return 0;
}


static int cmd_w(char *args){
  bool success = true;
  word_t result = expr(args,&success);
  set_WP(args,result);
  return 0;
  
}

static int cmd_d(char *args){
  int num = atoi(strtok(args," "));
  delete_point(num);
  return 0;
}

static int cmd_x(char *args){  
  int num_a = atoi(strtok(args," "));
  printf("%d",num_a);
  word_t addr = strtoul(strtok(NULL," "),NULL, 0); // 32位
  printf("0x%x:%08x\n",addr,pmem_read(addr,num_a));

  // for (int i = 0; i < num_a; i++)
  // {
  //   printf("0x%x:%08x\n",addr,pmem_read(addr,num));
  //   addr += 4;
  // }
   return 0; 
}

// static int cmd_x(char *args){
//   char *arg1 = strtok(NULL," ");
//   char *arg2 = strtok(NULL," ");
//   int n = strtol(arg1,NULL,10);
//   int addr = strtol(arg2,NULL,16);
//   uint8_t *raddr = guest_to_host(addr);
//   for(int i =0;i < n;i++ ,addr+=1,raddr++)
// 	  printf("%#x    %02x\n",addr,*raddr);  
//   return 0;
// }
static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
//   { "help", "Display information about all supported commands", cmd_help },

  { "q", "Exit NPC", cmd_q },
  { "c", "Continue the execution of the program", cmd_c },
  { "si", "execute N commands and suspend, default N = 1", cmd_si},
  { "info", "r is print the status of  monitor,w is print watchpoint's information",cmd_info},
  { "p", "calculate the value of EXPR ", cmd_p},
  { "w", "build the watchpoint and supervise this expression's value",cmd_w},
  { "d", "delate a watchpoint",cmd_d},
  { "x", "calculate the value of EXPR,and the result as the  start memory address,output permanet N 4Byte in 0x",cmd_x},



};

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

void sdb_mainloop(){
    //npc_cpu_exec(10000);
    //return;
    if(is_batch_mode){
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


    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { 
          if(strcmp(cmd,"q") == 0){
            printf("npc quit\n");
            npc_state.state = NPC_QUIT;
          }
          return;
         }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}


void init_sdb() {
//   /* Compile the regular expressions. */
   init_regex();

//   /* Initialize the watchpoint pool. */
   init_wp_pool();
}