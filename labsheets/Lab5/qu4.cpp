#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num,facnum;
    cout << "input number" << endl;
    cin >> num;
    facnum=1;

    if (num <= 100)
    {

        while (facnum <= num)
        {
            if(num%facnum ==0)
            {
                cout<<facnum<<endl;
            }
            facnum++;
          
        }
        

    } 
    else
    {
        cout<<"Wrong Input";
    }

    return 0;
}