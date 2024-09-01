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
    scanf("%s",thestudent.surname);
    printf("Enter the names of student ");
    scanf("%s",thestudent.names);
    printf("Enter the address of student ");
    scanf("%s",thestudent.address);
    printf("Enter the age of student ");
    scanf("%d",thestudent.age);

    return thestudent;
   
}

void displayStudent(struct student stu){

    printf("\nSurname of student is %s",stu.surname);
    printf("\nOther names of student is %s",stu.names);
    printf("\nAddress of student is %s",stu.address);
    printf("\nAge of student is %d",stu.age);
}


int main(){

    struct student stu1,stu2;

     printf("\nEnter details of student 1");
    stu1 = inputStudent(stu1);

    printf("\nEnter details of student 2");
    stu2 =inputStudent(stu2);


    if(stu1.age > stu2.age){
        displayStudent(stu1);
    }
    else 
    if (stu1.age < stu2.age){
        displayStudent(stu2);
    }
    else{

        displayStudent(stu1);
        printf("\n");
        displayStudent(stu2);
    }

  return 0;
}

