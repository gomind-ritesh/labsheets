#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int x;
    string buffer;
    //buffer = "Number Square" ;

    while (x != 0)
    {
        cout << "Input number ";
        cin >> x;


        if (x != 0)
        {
            buffer = buffer+to_string(x) + "       " + to_string(x * x) + "\n";
            //cout << buffer;
        }
    }
    ofstream dataFile;
    dataFile.open("Squares.txt");
    dataFile << buffer;
    dataFile.close();
}