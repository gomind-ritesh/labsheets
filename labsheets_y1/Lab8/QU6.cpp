#include <iostream> 
#include <cmath>
using namespace std;

const float pi=3.142;
float cyl_Area(float r, float h)

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
    return tprice;
}

int main()
{
    float radius,height,price,paintprice;

    cout<<"enter radius"<<endl;
    cin>>radius;

    cout<<"enter height"<<endl;
    cin>>height;

    cout<<"enter price per unit area"<<endl;
    cin>>price;

    paintprice = cyl_Paint(radius,height,price);
    cout<< "price of paint is "<<paintprice;
}