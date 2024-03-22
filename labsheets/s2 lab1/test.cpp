#include <iostream>
#include <fstream>
using namespace std;

// The base class (superclass) Staff as some attributes are common for all staff categories
class Staff {

protected: // use 'protected' for Superclass
    string name;
    string address;
    string gender;
    double monthlyIncome;

public:
    Staff();

    Staff(string nme, string addr, bool gen, float monthIn);

    // Get and Set 
    string getName();
    void setName(string nme);

    string getAddress();
    void setAddress(string addr);

    string getGender();
    void getGender(string gen);

    float getMonthlyIncome();
    void setMonthlyIncome(double monthIn);

    virtual float calculateSalary(); // created as an abstract method

    ~Staff();
};

Staff::Staff(string nme, string addr, string gen, float monthIn){
    name = nme;
    address = addr;
    gender = gen;
    monthlyIncome = monthIn;
}

   string Staff::getName(){
        return name;
    }
    void Staff::setName(string nme){
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
    void Staff::getGender(string gen){
        gender = gen;
    }

    float Staff::getMonthlyIncome(){
        return monthlyIncome,
    }
    void Staff::setMonthlyIncome(double monthIn){
        monthlyIncome = monthIn;
    }

// Doctors are also Staff.
// Thus, a Doctor class to represent doctors inherits from the Staff class, but
// includes two additional attributes, namely specialisation (a string type) and dailyFee (float type).


// (b) Write the interface of the Doctor class so that it inherits from the Staff class.

// Include a suitable non-default constructor. 

// In addition to the parameters required for the creation of objects of the superclass,
// the creation of a Doctor object also requires values for the specialisation and dailyFee attributes.

class Doctor : public Staff{

private: // 2 additional attributes only for doctors
    string specialisation;
    float dailyFee;

public:
    // Non default constructor:

    // also include attr from Staff class
    Doctor(string nme, string addr, string gen, double monthIn, string special, float dFee); 

    // Get and Set
    string getSpecialisation();
    void setSpecialisation(string special);

    float getDailyFee();
    void setDailyFee(float dFee);

    // Abstract method: do not need to include virtual as we are Implementing the method
    float calculateSalary(); // done over ride

  ~Doctor();
};

// (c) Give the implementation of the non-default constructor of the Doctor class such that it also
// inherits from the non-default constructor of its base class (or superclass).

// Superclass -> Staff

Doctor::Doctor(string nme, string addr, string gen, float monthIn, string special, float dFee):Staff(nme, addr, gen, monthIn){
    specialisation = special;
    dailyFee = dFee;
}
  
// (d) Implement the calculateSalary method of the Doctor class. 

// You may assume that a doctor works for 25 days in a month and
// that his monthly salary is calculated as follows:

// salary = monthlyIncome + dailyFee*25.
float Doctor::calculateSalary() {
    return (getMonthlyIncome() + getDailyFee() * 25);
}

// (e) Implement all the other required methods for the class Doctor.

    string Doctor::getSpecialisation(){
        return specialisation;
    }
    void Doctor::setSpecialisation(string special){
        specialisation = special;
    }

    float Doctor::getDailyFee(){
        return dailyFee;
    }
    void Doctor::setDailyFee(float dFee){
        dailyFee = dFee;
    }

// (f) A Nurse class represents information for nurses. 
// It also inherits from the Staff class. 
// It has a number of additional attributes and methods, namely department (a string type) and number of
// overtime hours (overtimeHours) which is of integer type.

// Write the class interface for the class Nurse.
// The class Nurse must have a default constructor and a non-default constructor.

class Nurse : public Staff{

private:
    string department;
    int overtimeHours;

public:
    Nurse(); // Default Constructor

    Nurse(string nme, string addr, string gen, float monthIn, string dept, int overtimeHr); // Non default Constructor

    // Get and Set
    string getDepartment();
    void setDepartment(string dept);

    int getOvertimeHours();
    void setOvertimeHours(int overtimeHr);  

    float calculateSalary(); // Over ride
};

// (g) Implement the calculateSalary method in the Nurse class.

// A nurse earns Rs300 for every extra hour that she works for.
 
// The monthly salary of a nurse is calculated as follows:
//  salary = monthlyIncome + overtimeHours*300.

float Nurse::calculateSalary() {
    return (getMonthlyIncome() + getOvertimeHours() * 300);
}

// (h) Implement all the other required methods for the class Nurse.

Nurse::Nurse(string nme, string addr, string gen, float monthIn, string dept, int overtimeHr):Staff(nme, addr, gen, monthIn){
    department = dept;
    overtimeHours = overtimeHr;
}

    string Nurse::getDepartment(){
        return department;
    }
    void Nurse::setDepartment(string dept){
        department = dept;
    }

    int Nurse::getOvertimeHours(){
        return overtimeHours;
    }
    void Nurse::setOvertimeHours(int overtimeHr){
        overtimeHours = overtimeHr;
    }

// (i) Write a main program to create an object, named d1, of type Doctor and
// an object, named n1,of type Nurse using the constructor without parameters.

int main(){

    // Object named d1 of type Doctor
    Doctor d1;

    // Object named n1 of type Nurse
    Nurse n1;

    // (j) Try to create an object of type Staff and see what happens.

       // Since Staff is an abstract class, you cannot create an object of type Staff directly. 
      // Result in a compilation error.

//(k) Enter the relevant information for d1 and n1.
// Use the set methods to update any existing data.

    // Update information for d1 (Doctor) using setter methods
    d1.setName("John Cena");
    d1.setAddress("Quatre Bornes, Mauritius");
    d1.setGender('M');
    d1.setMonthlyIncome(50000.0);
    d1.setSpecialisation("Gynecologue");
    d1.setDailyFee(1000.0);

    // Update information for n1 (Nurse) using setter methods
    n1.setName("Sarah Morgan");
    n1.setAddress("Curepipe, Mauritius");
    n1.setGender('F');
    n1.setMonthlyIncome(35000.0);
    n1.setDepartment("Emergency");
    n1.setOvertimeHours(5);
    
// (l) Display all the relevant information for d1 and n1.
    cout << "Doctor (d1)" << endl;
    cout << "Name: " << d1.getName() << endl;
    cout << "Address: " << d1.getAddress() << endl;
    cout << "Gender: " << d1.getGender() << endl;
    cout << "Monthly Income: " << d1.getMonthlyIncome() << endl;
    cout << "Specialisation: " << d1.getSpecialisation() << endl;
    cout << "Daily Fee: " << d1.getDailyFee() << endl;

    cout << "Nurse (n1)" << endl;
    cout << "Name: " << n1.getName() << endl;
    cout << "Address: " << n1.getAddress() << endl;
    cout << "Gender: " << n1.getGender() << endl;
    cout << "Monthly Income: " << n1.getMonthlyIncome() << endl;
    cout << "Department: " << n1.getDepartment() << endl;
    cout << "Overtime Hours: " << n1.getOvertimeHours() << endl;

    return 0;
};