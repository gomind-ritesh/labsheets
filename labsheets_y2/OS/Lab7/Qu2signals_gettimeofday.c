
#include <stdio.h>
#include <unistd.h>
#include<signal.h>
#include <sys/time.h>


struct timeval start;

void function1(){
struct timeval end;
printf("Alarm triggered\n");

//End timer
gettimeofday(&end , NULL);

// Calculate elapsed time in seconds and microseconds
    long elapsed_seconds = end.tv_sec - start.tv_sec;
    long elapsed_microseconds = end.tv_usec - start.tv_usec;

    if (elapsed_microseconds < 0) {
        elapsed_microseconds += 1000000;
        elapsed_seconds--;
    }
    
printf("program took %ld sec and %ld microsec \n",elapsed_seconds,elapsed_microseconds);
}

int main(){
double secdur,duration,millisecdur;

// start timer
gettimeofday(&start , NULL);

signal(SIGALRM,function1);
    // Loop for 200 seconds, triggering alarm every 10 seconds
    for (int i = 0; i < 20; i++) {
        alarm(10);   // Set alarm for 10 seconds
        pause();     // Wait for signal (SIGALRM)
    }
}

