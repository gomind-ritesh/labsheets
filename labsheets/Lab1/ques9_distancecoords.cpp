#include <iostream>
#include <cmath>
using namespace std;

int main()

{ 
    float x1,y1;
    float x2,y2;
    float distance;



//input of coordiantes

    cout << "Enter x1: ";
    cin >> x1;

    cout << "Enter y1: ";
    cin >> y1;

    cout << "Enter x2: ";
    cin >> x2;

    cout << "Enter y2: ";
    cin >> y2;


//calculating distance

    distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2));



    cout << endl;
    
//output
    cout << "distance b/w the two points is: " << distance << endl;

    return 0;

}
