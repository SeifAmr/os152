#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int pid;
    int status;

    if (!(pid = fork()))
    {
        //child run commands
        exit(0x7f);
    }
    else
    {
        //parent run commands
        //waitpid(pid,&status,0);
        wait(&status);
//0 = blocking
    }
    if (status == 0x7f)
    {
        printf(1, "OK\n");
    }
    else
    {
        printf(1, "FAILED\n");
    }
    exit(0);
}