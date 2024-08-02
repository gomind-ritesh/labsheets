#include <iostream> 
#include <cmath>
using namespace std;

int TwoPowerN(int n)

{
    if (n==0)
    {return 1;}
    else
    {return 2*TwoPowerN(n-1);}
}

int main()

{
    int n,ans;
    cout<<"enter n "<<endl;
    cin>>n;
    ans=TwoPowerN(n);
    cout<<ans;

    return 0;
}