#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num,sumsq;
    cout << "input number" << endl;
    cin >> num;
    sumsq=0;

    while (num != 0)
    {

        if (num % 3 == 0)
        {
            cout << num << endl;
            sumsq= sumsq+(num*num);
        }
        num= num-1;

    } 
    cout<<sumsq;

    return 0;
}