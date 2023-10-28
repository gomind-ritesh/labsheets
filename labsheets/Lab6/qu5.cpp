#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int choice, count;
    int num, sum;
    choice = 1;

    while (choice != 0)
    {
        cout << " **********************************" << endl;
        cout << "********Counting in Maths ********" << endl;
        cout << "***********************************" << endl;
        cout << "1.Sum of first n counting numbers" << endl;
        cout << "2.Sum of first nth odd numbers" << endl;
        cout << "3.Number of division by two" << endl;
        cout << "0.Exit" << endl;
        cout << "**********************************" << endl;
        cout << "Enter your choice(0 - 3) : " << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
        break;    
        case 1:
            cout << "input number" << endl;
            cin >> num;
            // cout<<((num/2)*(num+1))<<endl;
            sum = 0;
            count = 1;

            while (count <= num)
            {
                sum = sum + count;
                count++;
            }
            cout << sum << endl;
            break;

        case 2:

            cout << "input number" << endl;
            cin >> num;
            sum = 0;
            count = 1;
            // cout<<((num/2)*(num+1))<<endl;

            while (count <= num)
            {
                sum = sum + count;
                count += 2;
            }
            cout << sum << endl;
            break;
        case 3:
        cout << "input number" << endl;
            cin >> num;
            count =1;
            while(num/2 !=1)
            {
                num = num/2;
                count++;
            }
            cout << count<<endl;


            break;
        default:
            cout << "error incorrect input" << endl;
        }
    }

    return 0;
}