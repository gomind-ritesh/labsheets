/*The formulae for calculating sin(x) and cos(x),by Mc Claurin’s series, where x is in
radians, is given below.*/

#include <sys/types.h>
#include<unistd.h>
#include <stdio.h>
#include <pthread.h>
#include <string.h>

void * mycos(void * arg);
void * sine(void * arg);

int main()
{
double y,x ;

printf("Enter angle in degrees ");
scanf("%lf",&y);

x= y * (3.141592653589793 / 180.0);

pthread_t tcos;
pthread_t tsine;

pthread_create(&tcos,NULL,mycos,(void *) &x);
pthread_create(&tsine,NULL,sine,(void *) &x);

printf("I'm the parent\n");
sleep(5);
printf("Parent thread exiting\n");

//prevent parent from exiting before threads
pthread_join(tcos,NULL);
pthread_join(tsine,NULL);

return 0;
}

// Function to compute sine 
void * sine(void *x)
{ 
    double * val = (double *)x;
    double tval = *val;
    
    double term, sum;
    int n;
    
    term = tval; // First term is x
    sum = term;

    for (n = 3; n <= 15; n += 2) { // Use terms up to x^15
        term *= -tval * tval / ((n - 1) * n); // Compute the next term in the series
        sum += term; // Add the term to the sum
    }
        printf("The sine of x is %lf ", sum);
        
        printf("Hi I'm the sine thread\n");
        pthread_exit(NULL);
}



// Function to compute cos 
void * mycos(void *x)
{ 
    double * val = (double *)x;
    double tval = *val;
    
    //printf("tval : %lf",tval);
    
    double term, sum;
    int n;
    
    term = 1; // First term is 1
    sum = term;

    for (n = 2; n <= 16; n += 2) { // Use terms up to x^16
        term *= -tval * tval / ((n - 1) * n); // Compute the next term in the series
        sum += term; // Add the term to the sum
    }

    printf("The cos of x is %lf ", sum);
    
    printf("Hi I'm the cos thread\n");
    pthread_exit(NULL);
}


