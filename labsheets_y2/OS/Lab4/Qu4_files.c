#include <stdio.h>
// included for read and write
#include <unistd.h>
#include <fcntl.h>


int main()
{

int fl,n ;
char dread[100];

fl = open("lab44.dat",O_RDONLY);

if(fl == -1){
        printf("\nError Opening File!!\n");
    }
    else{
        printf("\nFile %s opened sucessfully!\n", "lab44.dat");
    }


 n = read(fl,dread,sizeof(dread));
 printf("%s,%d",dread,n);


close(fl);
return 0;
}

 /*

int main()
{
   FILE* fl;
   char dread[50];

   fl = fopen("lab44.dat" ,"r");

   while(fgets(dread,50,fl) != NULL)
{
 printf("%s",dread);
}

fclose(fl);

return 0;
}
*/

