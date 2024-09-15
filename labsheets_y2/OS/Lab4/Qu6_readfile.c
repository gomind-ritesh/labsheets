#include <stdio.h>
// included for read and write
#include <unistd.h>
#include <fcntl.h>


int main()
{

int fl,n ;
char dread[1024];

fl = open("lab45.dat",O_RDONLY);

if(fl == -1){
        printf("\nError Opening File!!\n");
    }
    else{
        printf("\nFile %s opened sucessfully!\n", "lab45.dat");
    }


 n = read(fl,dread,sizeof(dread));
printf("%s,%d",dread,n);


close(fl);
return 0;
}