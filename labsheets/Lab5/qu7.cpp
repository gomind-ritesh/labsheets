#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float num,sum;

    cout << "input number" << endl;
    cin >> num;
    sum=0;
    //cout<<((num/2)*(num+1))<<endl;

    while (num != 0)
    {
        sum=sum+num;
        num= num-1;
    } 
    cout<<sum<<endl;
    

    return 0;
}