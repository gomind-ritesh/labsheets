#include <iostream>
#include <cmath>
using namespace std;

/*
int main() 
{

int num;
num = 0;
while (num<100)
{
    num+=5;
    cout<<num<<endl;
}
return 0;
}
*/

int main() 
{

int num;
num = 0;

while (num<100)
{
    num++;
    if(num %5 ==0)
    {cout<<num<<endl;}
}
return 0;
}