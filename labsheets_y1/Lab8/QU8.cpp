#include <iostream> 
using namespace std;

int doubled_value(int num1,int num1,int num1)

{
    int pos;
    int max = -99999999;

    for (int n = 0; n < num; n++)

    {

        if (arg[n] > max)
        {

            max = arg[n];
            pos =n;
        }
    }


    return pos;
}


int main()

{
    int hval;
    int num = 10;
    int firstarray[10];
    for (int n=0;n<num;n++)
    {
        cout << "input "<< (n+1) <<" position value"<<endl;
        cin>> firstarray[n];
       
    }

    hval = maxPosn(firstarray, 10);
    cout<<hval<<endl;
    cout << "highest val "<<firstarray[hval]<<endl;
    return 0;
}

