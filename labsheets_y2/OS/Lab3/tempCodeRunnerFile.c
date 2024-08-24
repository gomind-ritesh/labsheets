#include <stdio.h>
#include <stdlib.h>

struct student {

    char surname[50];
    int age;
    char names[50];
    char address[50];

};


struct student inputStudent(){

    struct student thestudent;

    printf("\nEnter the surname of student ");
     //  for string when assigning val & is not added
    scanf("%s",thestudent.surname);
    printf("Enter the names of student ");
    scanf("%s",thestudent.names);
    printf("Enter the address of student ");
    scanf("%s",thestudent.address);
    printf("Enter the age of student ");
     //  Here & needs to be added
    scanf("%d",&thestudent.age);

    return thestudent;
   
}

void displayStudent(struct student stu){

    printf("\nSurname of student is %s",stu.surname);
    printf("\nOther names of student is %s",stu.names);
    printf("\nAddress of student is %s",stu.address);
    printf("\nAge of student is %d",stu.age);
}


int main(){

 
    //Declare your array of pointers. Each element in this array points to a struct student:
    struct student *stu[3];


    //Then allocate and assign the pointers to the structures 
    for(int j =0; j<3;j++)
    {
        stu[j] = malloc(sizeof(struct student));
    }

    //Declaring pointer to array created
    //Pointer **p points to address of array 
    struct student *(*p)[] = &stu;

    // Note (*p)[2]->name == *(*p)[2].name

    int pos;
    int smallest = 999;

    for(int i =0 ;i<3;i++){
    printf("\nEnter details of student %d",(i+1));
    *(*p)[i] = inputStudent();
    //displayStudent(stu[i]);


    if((*p)[i]->age < smallest){
        smallest = (*p)[i]->age;
        pos = i ;
    }

    }

    displayStudent(*(*p)[pos]);

    for(int k =0;k<3;k++)
    {
        free((*p)[k]) ;
    }


  return 0;
}

