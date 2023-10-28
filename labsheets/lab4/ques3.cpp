#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

float income,rammount,tax;
int numdependents;

cout<<"Please enter your annual salary: "<< endl;
cin>>income;

cout<<"Please enter number of dependants (0,1,2 or 3): "<< endl;
cin>>numdependents;

switch (numdependents)
{
case 0: rammount = income - 255000;
break;
case 1: rammount = income - 325000;
break;
case 2: rammount = income - 395000;
break;
case 3: rammount = income - 455000;
break;
default : cout<<"error incorrect input"<<endl;
}

if (rammount>50000)
{
    if (rammount >120000)
    {
        tax = 50000*0.15 + 70000*0.20 + (rammount-120000)*0.25;
    } 
    else 
    {
        tax = 50000*0.15 + (rammount-70000)*0.20 ;
    }
}
else
{
    tax = rammount*0.15;
}

cout<<"tax is = "<<tax<<endl;
return 0;
}