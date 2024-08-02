#include <iostream> 
#include <cmath>
using namespace std;

const float pi=3.142;
float cyl_Area(float h, float r)

{
    float tsa;
    tsa= 2*(pi)*r*(r+h);
    return tsa;
}

float cyl_Paint(float r1,float h1,float price)
{
    float area,tprice;
    area = cyl_Area(r1,h1);
    tprice = area* price;
}

int main()
{
    float radius,height,price,paintprice;

    cout<<"enter radius";
    cin>>radius;

    cout<<"enter height";
    cin>>height;

    cout<<"enter price";
    cin>>price;

    return cyl_Paint(radius,height,price);
}