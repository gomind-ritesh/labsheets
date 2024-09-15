#include <stdio.h>
// included for read and write
#include <unistd.h>
#include <fcntl.h>

struct student {

    char names[20];
    char id[10];
    char dob[10];
    char gender[7];
    char mstatus[10];

};


struct student inputStudent(){

    struct student thestudent;

    printf("Enter the names of student ");
    scanf("%s",thestudent.names);
    printf("Enter the id of student ");
    scanf("%s",thestudent.id);
    printf("Enter the date of birth of student ");
    scanf("%s",thestudent.dob);
    printf("Enter the gender of student ");
    scanf("%s",thestudent.gender);
    printf("Enter the marital status of student ");
    scanf("%s",thestudent.mstatus);


    return thestudent;
   
}



int main()
{

int fl,n,len ;
char buff[1024];
struct student stu;

fl = open("lab45.dat",O_WRONLY | O_APPEND);

if(fl == -1){
        printf("\nError Appending File!!\n");
    }
    else{
        printf("\nFile %s opened sucessfully!\n", "lab45.dat");
    }

//Entering details of student

for(int i =0 ;i<5;i++){
    printf("\nEnter details of student %d \n",(i+6));
    stu = inputStudent();

    //adding information to buffer;
len = snprintf(buff,sizeof(buff),"\nDetails of student %d \n name is %s \n id is %s \n Date of birth is %s \n Gender is %s \n Marital status is %s \n"
                , (i+1) ,  stu.names, stu.id, stu.dob , stu.gender ,stu.mstatus) ;



n = write(fl,buff,len);
//printf("%s,%d",buff,n);
}

close(fl);
return 0;
}
