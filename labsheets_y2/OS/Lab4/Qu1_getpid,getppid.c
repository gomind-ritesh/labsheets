#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/*
pid_t getpid(void);
pid_t getppid(void);
*/

int main(){


pid_t pid = getpid();  
pid_t ppid = getppid();  

printf("my process ID is %d\n", pid);
printf("my parent process ID is %d\n",ppid);
}