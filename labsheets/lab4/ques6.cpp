#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

int ctype;

cout<<"Please enter the car type: "<< endl;
cin>>ctype;

switch (ctype)
{
case 1: cout<<"car of 1500 CC";
break;
case 2: cout<<"car of 1500 CC with automatic mirrors";
break;
case 3: cout<<"car of 1500 CC with automatic mirrors and front and rear sensors";
break;
case 4: cout<<"car of 1200 CC";
break;
case 5: cout<<"car of 1200 CC with automatic gear";
break;
default : cout<<"error incorrect input"<<endl;
}

return 0;
}