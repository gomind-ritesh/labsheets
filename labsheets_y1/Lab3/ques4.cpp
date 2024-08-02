#include <iostream>
using namespace std;

int main() {

int entertime,leavetime,bill;
int ntime,stime;

cout<<"Please input the time of entry: ";
cin>> entertime ;

cout<<"Please input the time of leaving: ";
cin>> leavetime ;


if (leavetime > 21)
{
stime = leavetime -21;
ntime = 21- entertime;

}
else
{
ntime = leavetime-entertime;
stime = 0;

}
bill = ((ntime*250)+(stime*175));

cout<<"Bil: Rs"<<bill<<endl;

return 0;
}
