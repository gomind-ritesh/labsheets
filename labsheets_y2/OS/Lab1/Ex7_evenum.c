//Ex 7

#include <stdio.h>

int main()

{
    int input = 0;
    int count = 0;
    int total = 0;

     // Input continuously untill -1 num

   while(input != -1){

     printf("Enter number \n");
     scanf("%d", &input);
      
     if((input%2) == 0){
     //Calculations
     count++;
     total = total + input;
     }
  }

   // Printing values 

    printf("number of even input is %d and sum of even inputs is is %d",count,total);

    return 0;
}