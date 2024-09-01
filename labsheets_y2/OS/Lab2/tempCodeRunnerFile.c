//Lab2 ex4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * lar_sma(int arr[], int n)

{
   //declaring array to be returned
   int * minmax =(int*)malloc(2*sizeof(int));

    int largest = -99;
    int smallest = 999;
    
    for(int i= 0; i< n; i++ ){ 
     
     if(arr[i]> largest){
        largest= arr[i];
        minmax[1] = i;
     }
     
     if(arr[i] < smallest){
         smallest= arr[i];
        minmax[0] = i;
     }
     
     }
// returning array

return minmax; 

} 


void inputname(char arr[][50], int n)

{
    char buff[50];

    for(int i= 0; i< n; i++ ){ 
    printf("Enter name of student %d \n",(i+1));
    scanf("%s",buff); 
    strcpy(arr[i],buff);
    
   }
}

void inputsurname(char arr[][50], int n)

{
    char buff[50];
    for(int i= 0; i< n; i++ ){ 
    printf("Enter surname of student %d \n",(i+1));
    scanf("%s", buff); 
    strcpy(arr[i],buff);
    
   }
}

void inputmarks(int arr[], int n)

{
    for(int i= 0; i< n; i++ ){ 
    printf("Enter marks of student %d \n",(i+1));
    scanf("%d", &arr[i]); 
    
   }
}


int main() 

{

   int count;
   int * posminmax;
   
   // Input number of inputs
   printf("Enter number of inputs \n");
   scanf("%d", &count);
   
   char arrname[count][50];
   char arrsurname[count][50];
   int arrmks[count];
   
   inputname(arrname,count);
   inputsurname(arrsurname,count);
   inputmarks(arrmks,count);
   
   posminmax = lar_sma(arrmks, count);

   printf("\nName of student with largest mark is : %s",arrname[posminmax[1]]);
   printf("\nSurame of student with largest mark is : %s",arrsurname[posminmax[1]]);
   printf("\nmark of student with largest mark is : %d",arrmks[posminmax[1]]);

   printf("\nName of student with lowest mark is : %s",arrname[posminmax[0]]);
   printf("\nSurame of student with lowest mark is : %s",arrsurname[posminmax[0]]);
   printf("\nmark of student with lowest mark is : %d",arrmks[posminmax[0]]);

   free(posminmax);
}