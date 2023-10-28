#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float p,r,n,amm;
    int counter;
    cout << "input p" << endl;
    cin >> p;
     cout << "input r" << endl;
    cin >> r;
     cout << "input n" << endl;
    cin >> n;

    //cout<<p*(pow((1+(r/100)),n))<<endl;


    for(counter=1;counter <= n;counter++)
    {
        p=(p+(p*(r/100)));

    } 
    cout << "ammount is "<<p << endl;
 
    return 0;
}