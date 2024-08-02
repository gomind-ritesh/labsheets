#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

float numyears,numhours,salary;
cout<<"Please enter number of years of service: "<< endl;
cin>>numyears;
cout<<"Please enter number of hours worked: "<< endl;
cin>>numhours;

if (numyears>30 || numhours>60)
{
cout<< "error, Workers cannot work in the company for more than 30 years and they cannot work for more than 60 hours in a week"<<endl;

}
else
{
  if (numyears>=15)
  {
    if (numhours>40)
    {
    salary =(40*200)+((numhours-40)*300);
    }
    else
    {
    salary =((numhours)*200);
    }
  }
  else
  {
    if (numhours>45)
    {
    salary =(45*150)+((numhours-45)*250);
    }
    else
    {
    salary =((numhours)*150);
    } 
  }
cout<<"salary = "<<salary<<endl;
}

return 0;
}