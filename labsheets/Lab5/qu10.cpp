#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    float num;
    float factorial;

    cout << "input number" << endl;
    cin >> num;
    factorial=1;

    while (num !=0)
    {
        factorial=factorial*num;
        num= num-1;
    } 
   cout<<"factorial is "<<factorial;
    return 0;
}