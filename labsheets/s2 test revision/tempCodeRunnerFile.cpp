#include <iostream>
using namespace std;

class Employee {

private:

string name;

string id;

double netPay;

public:

Employee();

Employee(string name, string id,double netPay);

string getName();
string getId();
double getNetpay();

void setName(string newName);
void setid(string newId);
void setNetpay(double newNetpay);

~Employee();

};

Employee::Employee(){};

Employee::Employee(string nam, string i,double nPay){
name = nam;
id = i;
netPay = nPay;

};

string Employee::getName(){

return name;

};

void Employee::setName(string newName){

newName = name  ;

};
string Employee::getId(){

return id;

};

void Employee::setid(string newId){

newId = id  ;

};

double Employee::getNetpay(){

return netPay;

};

void Employee::setNetpay(double newNetpay){

newNetpay = netPay;

};

Employee::~Employee(){cout<<"property has been destroyed"<<endl;};

int main(){

Employee emp1("sara","12345678",100000);

cout << "employee name is "<<emp1.getName()<<endl;
cout << "employee id is " <<emp1.getId()<<endl;
cout << "employee Netpay is "<<emp1.getNetpay()<<endl;

};