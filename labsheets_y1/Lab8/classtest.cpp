#include <iostream> 
using namespace std;

int sum(int n)

{
    if (n==0)
    {return 0;}
    else
    {return n+sum(n-1);}
}

int main()

{
    int n,ans;
    cout<<"enter n "<<endl;
    cin>>n;
    ans=sum(n);
    cout<<ans;

    return 0;
}