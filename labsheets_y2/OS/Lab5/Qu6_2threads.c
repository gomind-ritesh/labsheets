/*
Write a program that creates an array of 10 student names and an array of 10 student
ids. You can choose to input the values or directly assign them. The program should
then create two threads. The first created thread executes a loop that displays all the
names, while the second thread should execute a loop displaying the ids. In the mean
time the parent thread should sleep for 5 seconds, then display “Parent Thread
Exiting” and then exits.
*/

#include <sys/types.h>
#include<unistd.h>
#include <stdio.h>
#include <pthread.h>
#include <string.h>

void * dispname(void * arg);
void * dispid(void * arg);

/*
// procedure to input name
void inputname(char arr[][50], int n)

{
    char buff[50];

    for(int i= 0; i< n; i++ ){ 
    printf("Enter name of student %d \n",(i+1));
    scanf("%s",buff); 
    strcpy(arr[i],buff);
    
   }
}

//procedure to enter id
void inputid(int arr[], int n)

{
    for(int i= 0; i< n; i++ ){ 
    printf("Enter id of student %d \n",(i+1));
    scanf("%d", &arr[i]); 
    
   }
}

*/

int main()
{

pthread_t tdispname;
pthread_t tdispid;

char *arrname[10] ={ "A","B","A","B","A","B","A","B","A","B"};
int arrid[10] = {1,2,3,4,5,6,7,8,9,10};

//inputname(arrname , count);
//inputid(arrid , count);

pthread_create(&tdispname,NULL,dispname,(void *)arrname);
pthread_create(&tdispid,NULL,dispid,(void *)arrid);

printf("I'm the parent\n");
sleep(5);
printf("Parent thread exiting\n");

//prevent parent from exiting before threads
pthread_join(tdispname,NULL);
pthread_join(tdispid,NULL);

return 0;
}

// thread function to display name
void * dispname(void *arrname)
{ 
//converting back to string , pointers of pointers
char **names  = (char **)(arrname);
int n =10;
for(int i= 0; i< n; i++ ){ 
    printf("Name of student %d is %s \n",(i+1),names[i]);
   }

printf("Hi I'm the display name thread\n");
pthread_exit(NULL);
}

// thread function to display id
void * dispid(void *arrid)
{ 

int * ids = (int *)(arrid);
int n =10;
for(int i= 0; i< n; i++ ){ 
    printf("id of student %d is %d \n",(i+1),ids[i]);
   }

printf("Hi I'm the display id thread\n");
pthread_exit(NULL);
}
