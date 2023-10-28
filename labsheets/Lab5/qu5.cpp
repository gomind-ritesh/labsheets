#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float numinput,average,input,counter;
    cout << "input number of inputs" << endl;
    cin >> numinput;

    average=0;

    for(counter=1;counter <= numinput;counter++)
    {

    cout << "input number " << endl;
    cin >> input;
    average = average+input;

    } 
    average =average/counter;
    cout << "Average is "<<average << endl;
 
    return 0;
}