#include <iostream>
#include <cmath>
using namespace std;

int main()

{ 
    float x1,y1;
    float x2,y2;
    float slope;



//input of coordiantes

    cout << "Enter x1: ";
    cin >> x1;

    cout << "Enter y1: ";
    cin >> y1;

    cout << "Enter x2: ";
    cin >> x2;

    cout << "Enter y2: ";
    cin >> y2;


//calculating slope

    slope = (y1-y2)/(x1-x2);



    cout << endl;
    
//output
    cout << "Slope of line is: " << slope << endl;

    return 0;

}
