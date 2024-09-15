/*The formulae for calculating sin(x) and cos(x),by Mc Claurin’s series, where x is in
radians, is given below.*/

#include <sys/types.h>
#include<unistd.h>
#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

void * mycos(void * arg);
void * sine(void * arg);

//mutex
pthread_mutex_t mylock;

int main()
{
double y,x ;
double **array ;

array = malloc(sizeof(double*)* 3);

for(int a =0 ; a <3 ; a++){
   array[a] = malloc(sizeof(double)*3);
};


pthread_t tcos;
pthread_t tsine;

pthread_mutex_init(&mylock ,NULL);

 for (int i =0 ;i< 3; i++){
     printf("Enter angle in degrees ");
     scanf("%lf",&y);
     x= y * (3.141592653589793 / 180.0);
     array[i][0] = x;
     }
     
     pthread_create(&tcos,NULL,mycos,(void *) array);
     pthread_create(&tsine,NULL,sine,(void *) array);


//printf("I'm the parent\n");
sleep(5);

//prevent parent from exiting before threads
pthread_join(tcos,NULL);
pthread_join(tsine,NULL);

//destroying mutex
pthread_mutex_destroy(&mylock);

for(int k =0 ;k <3;k++){
 printf("\t %lf", array[0][k]);
 printf("\t %lf", array[1][k]);
 printf("\t %lf", array[2][k]);
 }
//deallocate memory for array

for(int b =0 ; b<3 ;b++){
  free(array[b]);
  }
  
  free(array);

printf("Parent thread exiting\n");
return 0;
}

// Function to compute sine 
void * sine(void *array)
{ 
    double ** val = (double **)array;
    int numrows = 3;
    
    printf("num rows : %d",numrows);
    pthread_mutex_lock(&mylock);
    
    for (int i = 0 ;i< numrows ; i++){
    
    double tval = val[i][0];
    double term, sum;
    int n;
    
    term = tval; // First term is x
    sum = term;

    for (n = 3; n <= 15; n += 2) { // Use terms up to x^15
        term *= -tval * tval / ((n - 1) * n); // Compute the next term in the series
        sum += term; // Add the term to the sum
    }
       // printf("The sine of x is %lf ", sum);
       val[i][1] = sum;
       
      }
       pthread_mutex_unlock(&mylock);
       
       if( val[numrows -1][2] == 0)
         {
         printf("sine finished first\n");
         pthread_exit(NULL);
         }
         else
         {
         printf("sine did not  first\n");
         pthread_exit(NULL);
         }          
}



// Function to compute cos 
void * mycos(void *array)
{ 
    double ** val = (double **)array;
    int numrows = 3;
    
    pthread_mutex_lock(&mylock);
    
    for (int i =0 ;i< numrows ; i++){
    
    double tval = val[i][0];
    double term, sum;
    int n;
    
    term = 1; // First term is 1
    sum = term;

    for (n = 2; n <= 16; n += 2) { // Use terms up to x^16
        term *= -tval * tval / ((n - 1) * n); // Compute the next term in the series
        sum += term; // Add the term to the sum
    }

    //printf("The cos of x is %lf ", sum);
       val[i][2] = sum;
       
       }
       pthread_mutex_unlock(&mylock);
       
     if( val[numrows -1][1] == 0)
         {
         printf("cos finished first\n");
         pthread_exit(NULL);
         }
         else
         {
         printf("cos did not  first\n");
         pthread_exit(NULL);
         }
    
}


