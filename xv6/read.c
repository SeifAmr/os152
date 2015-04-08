//
// Created by avishay on 08/04/15.
// this class is for task 1.8 creating a user space program - "read"
// this program will read user input (character by character), from the
// standard input, and will print the characters to the standard output. read will terminate when the
// ‘q’ character will be read.
//

#include "types.h"
#include "stat.h"
#include "user.h"

char buf[512];

int main(int argc, char *argv[])
{
    int n;
    while(((n = read(0,buf,1)>0)&&n!='q'))
        write(1, buf, n);
    if(n < 0) {
        printf(1, "read: got a read error\n");
        exit(0);
    }
    exit(0);
}