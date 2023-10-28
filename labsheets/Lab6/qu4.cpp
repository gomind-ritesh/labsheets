#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float r,amm;
    int counter1,counter2,prab,n1,n2;
    prab=495;
    r=20;
    n1=0;
    n2=0;
    counter1=1;
    counter2=1;
   

    //cout<<p*(pow((1+(r/100)),n))<<endl;

while(prab < 1000)
   {
     n1++;
    while( counter1<=n1)
    {
        prab=(prab+(prab*(r/100)));
        counter1++;
    } 
   }
while(prab >= 1000 && prab< 1500)
   {
    r=10;
     n2++;
    while( counter2<=n2)
    {
        prab=(prab+(prab*(r/100)));
        counter2++;
    } 
   }
   
 cout << "ammount is "<<n1+n2<< endl;
 
    return 0;
}