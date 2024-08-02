#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int capacity, allowance;
    float numyears, salary;
    cout << "Please enter number of years of service: " << endl;
    cin >> numyears;
    cout << "Please enter salary: " << endl;
    cin >> salary;

    capacity = 0;
    allowance = 0 ;

    if (salary > 100000 || salary < 5000)
    {
        cout << "error, Workers cannot work in the company for more than 30 years and they cannot work for more than 60 hours in a week" << endl;
    }
    else
    {
        if (salary >= 30000)
        {
            if (salary >= 40000)
            {
                if (salary >= 50000)
                {
                    if (salary >= 60000)
                    {
                        if (salary >= 75000)
                        {
                            capacity = 2000;
                            allowance = 10000;
                        }
                    }
                    else
                    {

                        capacity = 1800;
                        allowance = 8000;
                    }
                }
                else
                {
                    if (numyears >= 10)
                    {
                        capacity = 1800;
                        allowance = 8000;
                    }
                    else
                    {
                        capacity = 1600;
                        allowance = 6000;
                    }
                }
            }
            else
            {
                if (numyears >= 20)
                {
                    capacity = 1500;
                    allowance = 5000;
                }
            }
    
        }
        else
        {
            if (numyears >= 25)
            {
                capacity = 1400;
                allowance = 4000;
            }
        }
    }

if (capacity != 0 &&  allowance != 0)
{cout<< "You are eligible for a free car, with a capacity of "<<capacity<<" and an optional car allowance of " <<allowance<<endl;}
else
{cout<< "You are not eligible for a free car";}
return 0;
}
