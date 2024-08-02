#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float input,sum;
    int counter;
    sum=0;
    counter=0;
    cout<<"input -1 to end"<<endl;
    do
    {
        cout<<"input number"<<endl;
        cin>>input;
        if(fmod(input,2) ==0)
        {
            counter++;
            sum=sum+input;
        }
       
    } while (input!= -1);
     cout<<"Number of even numbers is "<<counter<<endl;
    cout<<"sum of even numbers is "<<sum<<endl;
    

return 0;
}