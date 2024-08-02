#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input, counter1, counter2, count;
    string stars;
    cout << "input  number " << endl;
    cin >> input;
    stars = "";
    counter1 = 1;

    while (counter1 <= input)
    {
        counter2 = 1;
        while (counter2 <= counter1)
        {
            for (count = 1; count <= counter2; count++)
            {
                cout << "*";
            }
            cout<<"\n";
            counter2++;
        }
        counter1++;
    }
    return 0;
}