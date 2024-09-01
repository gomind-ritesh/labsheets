#include <stdio.h>

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

    struct student stu[20];

    int pos;
    int smallest = 999;

    for(int i =0 ;i<20;i++){
    printf("\nEnter details of student %d",(i+1));
    stu[i] = inputStudent();
    //displayStudent(stu[i]);


    if(stu[i].age < smallest){
        smallest = stu[i].age;
        pos = i ;
    }

    }

    displayStudent(stu[pos]);


  return 0;
}

