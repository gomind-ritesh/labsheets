#include <iostream>
using namespace std;

int main()
{

float radius, area;
float pi = 3.142;

cout<<"input radius= ";

cin>>radius;

if (radius > 0)
{
area=pi*radius*radius;
}
cout<<"area is "<<area<<endl;

return 0;
}