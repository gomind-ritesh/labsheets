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
    double duration,millisecdur;
    int secdur;
    int size = 10 ;

    printf("Enter the size of final array ");
    scanf("%d",&fsize);
    struct timeval start,end;

    //variables to store start and end time of programs (in seconds and useconds)
   

    while(size <= fsize){

        // start timer
        gettimeofday(&start , NULL);

    int arr[size];
     for(int i = 0; i< size ; i++){
       arr[i]=(rand());

      // printf("%d \n" ,arr[i]);
     }

     minmax (arr,size,&min,&max);

        //End timer
        gettimeofday(&end , NULL);

        // Converting duration to seconds
        //usec
        //duration = ((end.tv_sec - start.tv_sec)*1000000.0 + end.tv_usec) - start.tv_usec;

        double elapsed = (end.tv_sec - start.tv_sec) + 
              ((end.tv_usec - start.tv_usec)/1000000.0);
        /*      
        //sec and millisec
        secdur = duration / 1000000.0;
        millisecdur = (duration - secdur*1000000.0)/1000.0;
        */

     printf("For array with size %d min val is %d and max value is %d \n" ,size,min,max);
     //printf("For array with size %d, program took %d sec and %ld millisec \n",size,secdur,millisecdur);
     printf("%lf \n" ,elapsed);


     
    printf("\n");
     size = size*10;

    }

    return 0;
}
