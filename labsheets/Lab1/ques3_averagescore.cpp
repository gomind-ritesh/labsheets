#include <iostream>
using namespace std;

int main()

{ 
    int id;
    int S1017y,S1019y;
    int average;

    //inputs
    cout << "Please Enter your id number: ";
    cin >> id;

    cout << "Enter your score in CSE1017Y: ";
    cin >> S1017y;

    cout << "Enter your score in CSE1019Y: ";
    cin >> S1019y;

    //calculating average
    average = (S1017y+S1019y)/2;

    cout<< endl;

    //output
    cout << "id: " << id << endl;
    cout << "Score in CSE1017Y: " << S1017y << endl;
    cout << "Score in CSE1017Y: " << S1019y << endl;
    cout << "AVERAGE SCORE: " << average << endl;


    return 0;

}
