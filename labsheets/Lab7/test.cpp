#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string buffer;
    ofstream f("test.txt");
    f << "This line is written directly to the file test.txt\n ";

    cout << "Enter text for the file:\n ";

    getline(cin, buffer);
    f << buffer << "\n ";

    f.close();

    
    ifstream f1("test.txt");
    cout << "Here is the content of the file" << endl;

    char ch;
    while (f1.get(ch))
        cout << ch;

    cout << endl
         << " **End of line content***" << endl;
    ;
    f1.close();
    return 0;
}