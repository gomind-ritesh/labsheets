#include <iostream>
#include <cmath>
using namespace std;

int main() {

float a,b,c,rcheck;

cout<<"Please a,b,c in the form a(x^2)+bx+c: "<< endl;
cin>>a>>b>>c;

rcheck = (pow(b,2)-4*a*c);

if (rcheck < 0)
{
cout<< "complex roots";
}
else
{
cout << "real roots";
}

return 0;
}