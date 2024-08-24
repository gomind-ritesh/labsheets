#include <stdio.h>
// included for read and write
#include <unistd.h>

int main()
{

int fl;
char dread[50];

fl = open("lab44.dat","O_RDONLY");

while(read(fl,dread,20) != NULL)
{
 printf("%s",dread);
}

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

