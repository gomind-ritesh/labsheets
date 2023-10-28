#include <iostream>
using namespace std;

int main()

{ 
    int numcups;
    float cost;


//input of number of cups
    cout << "Enter num of cups: ";
    cin >> numcups;

//calculating cost

    cost = (numcups*25.00)+ 15.00 + (2.5*numcups);

    cout<< endl;


 //output
    cout << "cost of order: Rs " << cost  << endl;

    return 0;

}
