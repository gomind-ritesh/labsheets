#include <iostream>
using namespace std;

int main()

{ 
    float s1,s2,s3;
    float d1,d2,d3;
    float Tdistance,ttaken,avgspeed;


//input of speed and distances
    cout << "Enter distance d1: ";
    cin >> d1;

    cout << "Enter distance d2: ";
    cin >> d2;

    cout << "Enter distance d3: ";
    cin >> d3;


    cout << "Enter speed s1: ";
    cin >> s1;

    cout << "Enter speed s2: ";
    cin >> s2;

    cout << "Enter speed s3: ";
    cin >> s3;

//calculating total distance

    Tdistance = d1+d2+d3;

//calculating time taken

    ttaken = (d1/s1)+(d2/s2)+(d3/s3);

//calculating Average speed

    avgspeed = Tdistance/ttaken;



    cout<< endl;


 //output
    cout << "Total distance travelled: " << Tdistance << " km" << endl;
    cout << "Total time taken for journey: " << ttaken << " hrs"<< endl;
    cout <<  "Average speed: " << avgspeed << " km/h"<< endl;

    return 0;

}
