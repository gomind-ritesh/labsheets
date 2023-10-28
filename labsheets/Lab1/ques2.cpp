#include <iostream>
#include <cmath>
using namespace std;

int main()

{ 
    float diameter,cost;
    float area,cparea;


//input of diameter
    cout << "Enter diameter of the circle: ";
    cin >> diameter;

//input of cost
    cout << "Enter cost of the circle: ";
    cin >> cost;

    area = pow((diameter/2),2)*3.142;
    cparea = cost/area;


    cout << "cost per cm square is RS " << cparea ;


    return 0;

}
