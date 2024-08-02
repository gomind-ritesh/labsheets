#include <iostream>
#include <cmath>
using namespace std;

int main()

{ 
    float r,r1,r2;
    float h,h1,h2;
    float Tvol,volsmall,volbig,volconcrete;
    int y;
    float concost,cost;


//input of radius and height
    cout << "Enter redius r: ";
    cin >> r;

    cout << "Enter radius r1: ";
    cin >> r1;

    cout << "Enter radius r2: ";
    cin >> r2;


    cout << "Enter height h: ";
    cin >> h;

    cout << "Enter height h1: ";
    cin >> h1;

    cout << "Enter height h2: ";
    cin >> h2;

    cout << "Enter size of container y: ";
    cin >> y;

    cout << "Enter the cost of containers: ";
    cin >> concost;

//calculating volumes

    Tvol = pow(r,2)*3.142*h;

    volsmall = pow(r1,2)*3.142*h1;

    volbig = pow(r2,2)*3.142*h2;

    volconcrete = Tvol - (volsmall+ volbig);


    cout << endl;

//calculating cost

    cost = round(volconcrete/y)*concost;




//output
    cout << "Volume of concrete required: " << volconcrete << " m cube" << endl;
    cout << "Cost of pillar: Rs" << cost << endl;

 

    return 0;

}
