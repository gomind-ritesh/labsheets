#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float numinput,average,input,counter,largest,smallest;
    cout << "input number of inputs" << endl;
    cin >> numinput;

    average=0;
    largest = -99999999999999;
    smallest =99999999999999;

    for(counter=0;counter < numinput;counter++)
    {
    cout << "number of inputs left is "<<(numinput-counter) << endl;
    cout << "input number " << endl;
    cin >> input;
    average = average+input;
    if(input>largest)
    {
        largest=input;
    }
     if(input<smallest)
    {
        smallest=input;
    }


    } 
    average =average/counter;
    cout << "Average is "<<average << endl;
    cout << "Smallest number is "<<smallest << endl;
    cout << "Largest number is "<<largest << endl;
 
    return 0;
}