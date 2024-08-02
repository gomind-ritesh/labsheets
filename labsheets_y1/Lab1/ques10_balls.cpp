#include <iostream>
#include <cmath>
using namespace std;

int main()

{ 
    const float pi= 3.142;
    float r1,r2;
    float volsmall,volbig,volliquid;


//input of radius 
    cout << "Enter radius of larger ball, r1: ";
    cin >> r1;

    cout << "Enter radius of smaller ball, r2: ";
    cin >> r2;


//calculating volumes

    volsmall = pow(r2,3)*pi*(4.0/3);

    volbig = pow(r1,3)*pi*(4.0/3);

    volliquid = (volbig - volsmall);


    cout<< endl;


 //output
    cout << "Volume of liquid : " << volliquid << " m cube" << endl;
 

    return 0;

}
