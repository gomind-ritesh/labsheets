#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

float numunits,charge;
int tnum;

cout<<"Please enter number of units consumed: "<< endl;
cin>>numunits;

cout<<"Please enter tariff number (110,120 or 140): "<< endl;
cin>>tnum;

switch (tnum)
{
case 110: 
if (numunits>25)
{
    if (numunits >75)
    {
       if (numunits > 150)
       {
        charge = 44.00 + 25*2.75 + 50*3.25 +75*4.00 + (numunits-150)*6.50;
       }
       else
       {
        charge = 44.00 + 25*2.75 + 50*3.25 + (numunits-75)*4.00;
       }
    } 
    else 
    {
        charge = 44.00 + 25*2.75 + (numunits-25)*3.25;
    }
}
else
{
   charge = 44.00 + (numunits)*2.75 ;
}

break;

case 120: 
if (numunits>25)
{
    if (numunits >75)
    {
       if (numunits > 150)
       {
        charge = 184.00 + 25*3.00 + 50*3.50 +75*4.25 + (numunits-150)*6.00;
       }
       else
       {
        charge = 184.00 + 25*3.00 + 50*3.50 + (numunits-75)*4.25;
       }
    } 
    else 
    {
        charge = 184.00 + 25*3.00 + (numunits-25)*3.50;
    }
}
else
{
   charge = 184.00 + (numunits)*3.00 ;
}

break;

case 140: 
if (numunits>25)
{
    if (numunits >75)
    {
       if (numunits > 150)
       {
        charge = 360.00 + 25*3.25 + 50*3.75 +75*4.50 + (numunits-150)*5.75;
       }
       else
       {
        charge = 360.00 + 25*3.25 + 50*3.75 + (numunits-75)*4.50;
       }
    } 
    else 
    {
        charge = 360.00 + 25*3.25 + (numunits-25)*3.75;
    }
}
else
{
   charge = 360.00 + (numunits)*3.25 ;
}

break;

default : cout<<"error incorrect input"<<endl;
}


cout<<"charge is RS "<<charge<<endl;
return 0;
}
