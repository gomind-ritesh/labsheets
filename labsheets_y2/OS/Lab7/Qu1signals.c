#include <stdio.h>
#include <unistd.h>
#include<signal.h>

void function1(){
printf("Alarm triggered\n");
}

int main(){
signal(SIGALRM,function1);
alarm(5);
pause();
}
