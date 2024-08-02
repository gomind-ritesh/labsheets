#include <iostream>
#include <cmath>
using namespace std;

int main() {

float num1,num2;

cout<<"Please enter first number: "<< endl;
cin>>num1;
cout<<"Please enter second number: "<< endl;
cin>>num2;

if (num2 < num1)
{
cout<< "First number is greater than second number";
}
else
{
cout << "second number is greater than First number";
}

return 0;
}

