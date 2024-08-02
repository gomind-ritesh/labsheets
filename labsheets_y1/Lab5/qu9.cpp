#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float x,n,p,i;

    cout << "input x" << endl;
    cin >> x;
    cout << "input n" << endl;
    cin >> n;
    p=1;
    
    for (i=1;i<=n;i++)
    {
        p=p*x;
    } 
    cout<<p<<endl;
    

    return 0;
}