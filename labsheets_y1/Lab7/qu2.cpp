#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int x;
    string buffer;
    //buffer = "Number Square" ;

    ifstream dataFile;
    dataFile.open("Squares.txt");
    dataFile >> buffer;
    while(!dataFile.eof())
    {
        cout<<buffer<<endl;
        dataFile >> buffer;
    }
    dataFile.close();
}