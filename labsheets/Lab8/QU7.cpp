#include <iostream> 
#include <cmath>
using namespace std;

char grade(int mks)

{
    
    if (mks>= 70)
    {
        return 'A';
    }
    else
    {
        if(mks>=60)
        {
            return 'B';
        }
        else
        {
            if(mks>=50)
            {
                return 'C';
            }
            else
            {
                if(mks<40)
                {
                    return 'F';
                }
                return 'D';

            }
        }
    }
}


int main()
{
    float marks;
    char gra;

    cout<<"enter marks"<<endl;
    cin>>marks;

    gra=grade(marks);
    cout<<"grade is "<<gra;
    
}