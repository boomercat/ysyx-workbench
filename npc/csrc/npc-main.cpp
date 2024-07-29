#include <utils.h>

void init_monitor(int, char *[]);
void sdb_mainloop();
void trap_ebreak(){
    


}
int main(int argc, char *argv[]){
    init_monitor(argc,argv);

    sdb_mainloop();
    tfp->close();
    delete top;
    return is_exit_status_bad();

}