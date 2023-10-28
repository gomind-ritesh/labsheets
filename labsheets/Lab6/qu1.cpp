#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float input;
    cout<<"input negative number to end"<<endl;
    
    while (input>=0)
    {
        cout<<"input number"<<endl;
        cin>>input;
        if(input>=0)
        {
            cout<<"Square root of number is "<<sqrt(input)<<endl;
        }
       
    } 
return 0;
}