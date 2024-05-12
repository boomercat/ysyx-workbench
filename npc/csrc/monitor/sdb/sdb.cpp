#include <common.h>
#include <readline/readline.h>
#include <readline/history.h>

static int is_batch_mode = false;

#define NR_CMD ARRLEN(cmd_table)

void init_wp_pool();
void npc_cpu_exec(uint64_t n);


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


static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
//   { "help", "Display information about all supported commands", cmd_help },

  { "q", "Exit NPC", cmd_q },
  { "c", "Continue the execution of the program", cmd_c },
  { "si", "execute N commands and suspend, default N = 1", cmd_si}

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
//   init_regex();

//   /* Initialize the watchpoint pool. */
//   init_wp_pool();
}