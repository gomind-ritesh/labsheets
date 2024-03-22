#include <iostream>
using namespace std;

class Patient {

protected:

string patientID;

string surname;

char gender;

int age;

public:

Patient();

Patient(string id, string sur, char gen, int ag);

string getPatientID();

void setPatientID(string id);

string getSurname();

void setSurname(string sur);

char getGender();

void setGender(char gen);

int getAge();

void setAge(int ag);

~Patient();

};

Patient::Patient(){};

Patient::Patient(string id, string sur, char gen, int ag){

patientID = id;
surname = sur;
gender = gen;
age = ag;

};
string Patient::getPatientID(){

return patientID;

};

void Patient::setPatientID(string id){

patientID = id ;

};
string Patient::getSurname(){

return surname;

};

void Patient::setSurname(string sur){

surname = sur ;

};
char Patient::getGender(){

return gender;

};

void Patient::setGender(char gen){

gender = gen;

};
int Patient::getAge(){

return age;

};

void Patient::setAge(int ag){

age = ag;

};

Patient::~Patient(){cout<<"property has been destroyed"<<endl;};

int main(){

Patient p1("1","Smith",'f',20);

cout << p1.getPatientID()<<endl;
cout << p1.getSurname()<<endl;
cout << p1.getGender()<<endl;
cout << p1.getAge()<<endl;

};