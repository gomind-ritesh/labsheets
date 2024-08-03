//ex 8

#include <stdio.h>
#include <stdbool.h>
int main()

{
    int input ;
    bool prime = true;

     // Input continuously untill positive num
   printf("Enter number \n");
   scanf("%d", &input);
   
   while(input < 0 ){

     printf("Enter number \n");
     scanf("%d", &input);
     }
     
     if((input % 2) == 0){
            prime = false;
        }
     
     
   for(int i= 3;i <(input/2); i= i+2)
    {
        if((input % i) == 0){
            prime = false;
        }
    }

   // Printing values 
   if(prime){
    printf("input is a prime numeber");
    }
    else{
        printf("input is not a prime numeber");
    }
    

    return 0;
}