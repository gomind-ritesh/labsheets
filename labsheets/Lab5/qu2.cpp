#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

int num,total;
num = 0;
total=0;
while (num<100)
{
    num+=5;
    total= total +num;
    cout<<total<<endl;
}

return 0;

}