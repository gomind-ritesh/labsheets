#include <iostream>
using namespace std;

int main() {

float whrs, overtime,salary;

cout<<"Input no. of hours worked: ";

cin>> whrs;

if (whrs > 40)
{
overtime = whrs -40 ;
}

salary= (((whrs-overtime)*100)+(overtime*150));

cout<<"Total wages for the week: Rs"<<salary<<endl;

return 0;
}
