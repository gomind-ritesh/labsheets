//ex 9

#include <stdio.h>

int main()

{
    int input ,count;
    int largest= -99;

     // Input number of inputs
   printf("Enter number of inputs \n");
   scanf("%d", &count);
   
   for(int i= 0; i< count; i++ ){

     printf("Enter number  \n");
     scanf("%d", &input);

     if(input> largest){
      largest = input;
      }
    
     }

   // Printing values 
    printf("largest number is %d", largest);

    return 0;
}