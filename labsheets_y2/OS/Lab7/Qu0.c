#include <stdio.h>
#include <unistd.h>
#include<signal.h>
void handler(){
printf("signal handler called\n");
}

int main(){
signal(SIGALRM,handler);
alarm(10);
pause();
}
