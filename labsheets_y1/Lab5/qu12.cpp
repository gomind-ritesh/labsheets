#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float p,r,n,amm;
    int counter;
     cout << "input r" << endl;
    cin >> r;
    p=1;
    n=0;
    counter=1;
   

    //cout<<p*(pow((1+(r/100)),n))<<endl;

while(p < 2)
   {
     n++;
    while( counter<=n)
    {
        p=(p+(p*(r/100)));
        counter++;
    } 
   }
 cout << "ammount is "<<n << endl;
 
    return 0;
}