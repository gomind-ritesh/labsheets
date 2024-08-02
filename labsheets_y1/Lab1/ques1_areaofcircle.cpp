#include <iostream>
#include <cmath>
using namespace std;

int main()

{ 
    float radius;
    float area;

    //input of radius
    cout << "Enter radius of the circle: ";
    cin >> radius;

    area = pow(radius,2)*3.142;
    cout <<"area is " << area;


    return 0;

}
