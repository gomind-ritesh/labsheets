#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>


// Procedure to find min and max
void minmax (int arr[],int len , int *min, int *max)
{
    *min = *max = arr[0];
   
    for (int i = 1 ; i < len ; i++)
    {
        if( arr[i] > *max){
          *max = arr[i];
        }

        if( arr[i] < *min){
          *min = arr[i];
        }
    }
}


int main()
{
    int min,max,fsize;
    int secdur;
    double duration,millisecdur;
    int size = 10 ;

    printf("Enter the size of final array ");
    scanf("%d",&fsize);
    struct timeval start,end;

    while(size <= fsize){

    int arr[size];
     for(int i = 0; i< size ; i++){
       arr[i]=(rand());

      // printf("%d \n" ,arr[i]);
     }

        // start timer
        gettimeofday(&start , NULL);
        //printf("start For array with size %d, program took %ld sec and %ld microsec \n",size,start.tv_sec,start.tv_usec);

     minmax (arr,size,&min,&max);

        //End timer
        gettimeofday(&end , NULL);
        //printf("end For array with size %d, program took %ld sec and %ld microsec \n",size,end.tv_sec,end.tv_usec);


        // Converting duration to seconds
        //usec
        duration = ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);

             
        //sec and millisec
        secdur = duration *(1/ 1000000);
        millisecdur = (duration - secdur*1000000)/1000.0;
    

     printf("For array with size %d min val is %d and max value is %d \n" ,size,min,max);
     printf("For array with size %d, program took %ld sec and %lf millisec \n",size,secdur,millisecdur);

    printf("\n");
     size = size*10;

    }

    return 0;
}
