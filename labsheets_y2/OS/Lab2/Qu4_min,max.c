//Lab2 ex4
#include <stdio.h>

void lar_sma(int arr[], int n)

{
    int largest= -99;
    int smallest = 999;
    
    for(int i= 0; i< n; i++ ){ 
     
     if(arr[i]> largest){
     largest = arr[i];
     }
     
     if(arr[i] <smallest){
     smallest = arr[i];
     }
     
     }
// Printing values

printf("largest number is %d ,and smallest number is %d",largest,smallest); 

} 

int main() 

{

   int count;
   
   // Input number of inputs
   printf("Enter number of inputs \n");
   scanf("%d", &count);
   
   int arr[count];
   
   for(int i= 0; i< count; i++ ){ 
    printf("Enter number  \n");
    scanf("%d", &arr[i]); 
    
   }
   lar_sma(arr, count);
}