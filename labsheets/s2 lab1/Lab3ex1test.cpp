#include <iostream>
 
 using namespace std;

class Staff{

protected :

   string name;
   string address;
   string gender;
   int monthlyincome;


 public:
    Staff();
    Staff(string nme, string addr, string gdr, int MIn);
    string getname();
    void setname(string nme);
    string getAddress();
    void setAddress(string addr);
    string getGender();
    void setGender(string gdr);
    int getMonthlyIncome();
    void setMonthlyIncome(int MIn);
    virtual float calculateSalary();
    ~Staff();

 };
    
    Staff::Staff(string nme, string addr, string gdr, int MIn){
    name = nme;
    address = addr;
    gender = gdr;
    monthlyincome = MIn;
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
    void  Staff::setMonthlyIncome(int MIn){
    monthlyincome = MIn;
    }

    Staff::~Staff(){
    cout<<"Doctor has been destroyed"<<endl;
    }

class Doctor: public Staff{

private:

    string specialisation;
    float dailyfee;

public:
    Doctor();
    Doctor(string nme, string addr, string gdr, int MIn, string spec , float dfee);
    string getspecialisation();
    void setspecialisation(string spec);
    float getdailyfee();
    void setdailyfee(float dfee);
    float calculatesalary() ;
    ~Doctor();
};

    Doctor::Doctor(string nme, string addr, string gdr, int MIn, string spec , float dfee):Staff(nme,addr,gdr,MIn){
        
        specialisation = spec;
        dailyfee = dfee ;
 
    }

    float Doctor::calculatesalary(){
    return (monthlyincome + (dailyfee * 25.00));
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


    Doctor::~Doctor(){
    cout<<"Doctor has been destroyed"<<endl;
    }

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
    float calculatesalary() ;
    ~Nurse();
};

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

    float Nurse::calculatesalary(){
        return (monthlyincome + (overtimeHours * 300.00));
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
    
   d1.setname("Jane");
   d1.setAddress("Port Louis");
   d1.setGender("Female");
   d1.setMonthlyIncome(20000);
   d1.setspecialisation("Cardiologist");
   d1.setdailyfee(500);


   n1.setname("Paul");
   n1.setAddress("Quatre Bornes");
   n1.setGender("Male");
   n1.setMonthlyIncome(18000.00);
   n1.setdepartment("Burns");
   n1.setovertimeHours(6);
    

/*
    
    cout<<"For doctor d1"<<end1;
    cout<<"name: "<<d1.getname()<<endl;
    cout<<"Address: "<<d1.getAddress()<<endl;
    cout<<"Gender: "<<d1.getGender<<endl;
    cout<<"Monthly Income "<<d1.getMonthlyIncome()<<endl;
    cout<<"Specialisation: "<<d1.getspecialisation()<<endl;
    cout<<"Daily fee:"<<d1.getdailyfee()<<endl;
     cout<<""<<endl;

    cout<<"For Nurse N1"<<end1;
    cout<<"name: "<<d1.getname()<<endl;
    cout<<"Address: "<<d1.getAddress()<<endl;
    cout<<"Gender: "<<d1.getGender<<endl;
    cout<<"Monthly Income: "<<d1.getMonthlyIncome()<<endl;
    cout<<"department: "<<d1.getspecialisation()<<endl;
    cout<<"overtimeHours:"<<d1.getdailyfee()<<endl;
     cout<<""<<endl;



    return 0;
    */
 cout<<"Doctor Information:"<<endl;
 cout<<"Name: "<<d1.getname()<<endl;
 cout<<"Address: "<<d1.getAddress()<<endl;
 cout<<"Gender: "<<d1.getGender()<<endl;
 cout<<"Monthly Income: "<<d1.getMonthlyIncome()<<endl;
 cout<<"Specialization: "<<d1.getspecialisation()<<endl;
 cout<<"Daily Fee: "<<d1.getdailyfee()<<endl;
 cout<<"Salary: "<<d1.calculateSalary()<<endl;

 cout<<"\nNurse Information:"<<endl;
 cout<<"Name: "<<n1.getname()<<endl;
 cout<<"Address: "<<n1.getAddress()<<endl;
 cout<<"Gender: "<<n1.getGender()<<endl;
 cout<<"Monthly Income: "<<n1.getMonthlyIncome()<<endl;
 cout<<"Department: "<<n1.getdepartment()<<endl;
 cout<<"Overtime Hours: "<<n1.getovertimeHours()<<endl;
 cout<<"Salary: "<<n1.calculateSalary()<<endl;
    

}