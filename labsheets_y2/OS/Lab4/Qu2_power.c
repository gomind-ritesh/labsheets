#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>


float power(float x,int n){

    float pow = 1;

    for(int i =0 ; i<(n);i++)
    {
        pow = pow *x;

    }
    return pow;

}

int main(){

    float x,res;
    int secdur;
    double duration,millisecdur;

    printf("Enter the value of x : \n");
    scanf("%f" , &x);

    struct timeval start,end;

    // start timer
    gettimeofday(&start , NULL);

    res = power(x,100)+ power(x,99) +power(x,98);

    printf("Result of polynomial is %f",res);

     //End timer
    gettimeofday(&end , NULL);
    //printf("end For array with size %d, program took %ld sec and %ld microsec \n",size,end.tv_sec,end.tv_usec);


    // Converting duration to seconds
    //usec
    duration = ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);

             
    //sec and millisec
    secdur = duration *(1/ 1000000);
    millisecdur = (duration - secdur*1000000)/1000.0;
    
    printf("program took %ld sec and %lf millisec \n" ,secdur,millisecdur);


    return 0;
}
