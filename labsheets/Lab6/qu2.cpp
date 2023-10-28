#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float input,sum;
    int pcount,ncount;
    pcount=0;
    ncount=0;
    sum=0;
    cout<<"input negative number to end"<<endl;
    
    while (input != -2)
    {
        cout<<"input number"<<endl;
        cin>>input;
        if(input>0)
        {
            pcount++;
            sum=sum+input;
        }
        else
        {
            if (input<0 && input != -2)
            {ncount++;}

        }
        cout<<"number of  positive number is "<<pcount<<endl; 
        cout<<"number of  negative number is "<<ncount<<endl;  
        

       
    }
    cout<<"Sum is "<<sum<<endl; 
return 0;
}