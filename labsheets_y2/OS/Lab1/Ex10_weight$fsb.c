//ex 10

#include <stdio.h>

int main()

{
    int count;
    int input[3];
    int wlar[] = {0,-99,0};
    int slar[] = {0,0,-99};

     // Input number of patients
   printf("Enter number of patients \n");
   scanf("%d", &count);
   
   for(int i= 0; i< count; i++ ){

     printf("Enter id , weight and FSB of patient  \n");
     
     for(int j = 0; j<3;j++ ){
     scanf("%d", &input[j]);
     }

     if(input[1]> wlar[1]){
       
       for(int k = 0; k<3;k++ ){
       wlar[k] = input[k];
       }
      }
      
     if(input[2]> slar[2]){
       
       for(int l = 0; l<3;l++ ){
       slar[l] = input[l];
       }
      }
    
     }

   // Printing values 
   
   if(wlar[0] == slar[0]){
    printf("patient with patient id %d has the highest weight and FSB level ",wlar[0]);
    }
    else{
    
    printf("patient with patient id %d has the highest weight \n",wlar[0]);
    
    printf("patient with patient id %d has the highest FSB level ",slar[0]);
    
        
    }

    return 0;
}