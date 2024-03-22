#include <iostream>
 
 using namespace std;

class Staff{

protected :

   string name;
   string address;
   string gender;
   float monthlyincome;


 public:
    Staff();
    Staff(string nme, string addr, string gdr, float MIn);
    string getname();
    void setname(string nme);
    string getAddress();
    void setAddress(string addr);
    string getGender();
    void setGender(string gdr);
    int getMonthlyIncome();
    void setMonthlyIncome(float MIn);
    virtual float calculateSalary();
    ~Staff();

 };
    
    Staff::Staff(string nme, string addr, string gdr, float MIn){
    name = nme;
    address = addr;
    gender = gdr;
    monthlyincome = MIn;
    }

    Staff::Staff()
    {
    } 
   

    string Staff::getname(){
    return name;
    }
    void Staff::setname(string nme){
    name = nme;
    }

    string Staff::getAddress(){
    return address;
    }
    void Staff::setAddress(string addr){
    address = addr;
    }

    string Staff::getGender(){
    return gender;
    }
    void Staff::setGender(string gdr){
    gender = gdr;}

    int Staff::getMonthlyIncome(){
    return monthlyincome;
    }
    void  Staff::setMonthlyIncome(float MIn){
    monthlyincome = MIn;
    }
    float Staff::calculateSalary()
    {
    return monthlyincome; 
    }

    Staff::~Staff(){
    cout<<"staff has been destroyed"<<endl;
    }

class Doctor: public Staff{

private:

    string specialisation;
    float dailyfee;

public:
    Doctor();
    Doctor(string nme, string addr, string gdr, float MIn, string spec , float dfee);
    string getspecialisation();
    void setspecialisation(string spec);
    float getdailyfee();
    void setdailyfee(float dfee);
    float calculateSalary()  ;
    //~Doctor();
};

    Doctor::Doctor()
    {
    }

    Doctor::Doctor(string nme, string addr, string gdr, float MIn, string spec , float dfee):Staff(nme,addr,gdr,MIn){
        
        specialisation = spec;
        dailyfee = dfee ;
 
    }

    float Doctor::calculateSalary(){
    return (monthlyincome + (dailyfee * 25));
    }

    string Doctor::getspecialisation(){
    return specialisation;
    }
    void Doctor::setspecialisation(string spec){
    specialisation = spec;
    }

    float Doctor::getdailyfee(){
    return dailyfee;
    }
    void Doctor::setdailyfee(float dfee){
    dailyfee = dfee;
    }


    //Doctor::~Doctor(){
    //cout<<"Doctor has been destroyed"<<endl;
    //}

class Nurse: public Staff{

private:

    string department;
    int overtimeHours;

public:
    Nurse();
    Nurse(string nme, string addr, string gdr, int MIn, string dpt , int ovt);
    string getdepartment();
    void setdepartment(string dpt);
    int getovertimeHours();
    void setovertimeHours(int ovt);
    float calculateSalary() ;
    ~Nurse();
};

    Nurse::Nurse()
    {
    }
    Nurse::Nurse(string nme, string addr, string gdr, int MIn, string dpt , int ovt):Staff(nme,addr,gdr,MIn){
        
        department = dpt;
        overtimeHours = ovt ;
 
    }

    string Nurse::getdepartment(){
    return department;
    }
    void Nurse::setdepartment(string dpt){
    department = dpt;
    }

    int Nurse::getovertimeHours(){
    return overtimeHours;
    }
    void Nurse::setovertimeHours(int ovt){
    overtimeHours = ovt;
    }

    float Nurse::calculateSalary(){
        return (monthlyincome + (overtimeHours * 300));
    }

    Nurse::~Nurse(){
    cout<<"Nurse has been destroyed"<<endl;
    }


int main()

{
    //i 

    Doctor d1;
    Nurse n1;

    //j

    //staff s1();



    //k
    
   d1.setname("Tom");
   d1.setAddress("Port Louis");
   d1.setGender("Male");
   d1.setMonthlyIncome(20000);
   d1.setspecialisation("Cardiologist");
   d1.setdailyfee(1000);


   n1.setname("lara");
   n1.setAddress("Corromandel");
   n1.setGender("Female");
   n1.setMonthlyIncome(18000.00);
   n1.setdepartment("Pediatrics");
   n1.setovertimeHours(5);
    


 cout<<"For doctor d1:"<<endl;
 cout<<"Name: "<<d1.getname()<<endl;
 cout<<"Address: "<<d1.getAddress()<<endl;
 cout<<"Gender: "<<d1.getGender()<<endl;
 cout<<"Monthly Income: "<<d1.getMonthlyIncome()<<endl;
 cout<<"Specialization: "<<d1.getspecialisation()<<endl;
 cout<<"Daily Fee: "<<d1.getdailyfee()<<endl;
 cout<<"Salary: "<<d1.calculateSalary()<<endl;

 cout<<""<<endl;

 cout<<"For Nurse N1"<<endl;
 cout<<"Name: "<<n1.getname()<<endl;
 cout<<"Address: "<<n1.getAddress()<<endl;
 cout<<"Gender: "<<n1.getGender()<<endl;
 cout<<"Monthly Income: "<<n1.getMonthlyIncome()<<endl;
 cout<<"Department: "<<n1.getdepartment()<<endl;
 cout<<"Overtime Hours: "<<n1.getovertimeHours()<<endl;
 cout<<"Salary: "<<n1.calculateSalary()<<endl;
    

}