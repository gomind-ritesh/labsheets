#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>


int main(){


    double duration,millisecdur;

    struct timeval start,end;

     // start timer
    gettimeofday(&start , NULL);

    for(int i  =0;i<3;i++){

    sleep(2);
    pid_t pid = getpid();

    printf("Program has slept %d seconds ",((i+1)*2));

     //End timer
    gettimeofday(&end , NULL);
    //printf("end For array with size %d, program took %ld sec and %ld microsec \n",size,end.tv_sec,end.tv_usec);


    // Converting duration to microseconds
    //usec
    duration = ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);

             
    //millisec
    millisecdur = (duration )/1000.0;
    
    printf("program with pid %d took %lf millisec \n" ,pid,millisecdur);

    }


    return 0;
}
