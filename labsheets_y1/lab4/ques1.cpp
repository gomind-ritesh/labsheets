#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

float x,y,numadults,numchildren,charge;
int menstatus;


cout<<"Please enter x: "<< endl;
cin>>x;
cout<<"Please enter y: "<< endl;
cin>>y;
cout<<"Please enter number of adults: "<< endl;
cin>>numadults;
cout<<"Please enter number of children: "<< endl;
cin>>numchildren;
cout<<"Please whether they should be charged as 1: member or 2: non-member, enter 1 or 2: "<< endl;
cin>>menstatus;

if (menstatus==1)
{
charge = (numadults*x)+(numchildren*y);
}
else
{
  if (menstatus==2)
  {
  charge = (numadults*2*x)+(numchildren*1.5*y);
  }

}
cout<<"charge = "<<charge<<endl;
return 0;
}