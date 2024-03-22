#include <iostream>
 
 using namespace std;

class ImmovableProperty{

private :
   int propertyID =1 ;
   string surname ="sur";
   string firstname ="fna";
   string address;
   double cost;
   string location;
   double LandArea;
   bool building;
   double BuildArea;

 public:
    ImmovableProperty();
    ImmovableProperty(int id, string sname, string fname, string addr, double cst, string loc, double Larea, bool build, double Barea);
    int getIPropertyID();
    void setIPropertyID(int id);
    string getISurname();
    void setISurname(string sname);
    string getIFirstname();
    void setIFirstname(string fname);
    string getIAddress();
    void setIAddress(string addr);
    double getICost();
    void setICost(double cst);
    string getILocation();
    void setILocation(string loc);
    double getIAreaLocation();
    void setIAreaLocation(double Larea);
    bool getIBuilding();
    void setIBuilding(bool build);
    double getIAreaBuilding();
    void setIAreaBuilding(double Barea);
    //~ImmovableProperty();

 };
    
    ImmovableProperty::ImmovableProperty(int id, string sname, string fname, string addr, double cst, string loc, double Larea, bool build, double Barea){
    propertyID = id;
    surname = sname;
    firstname = fname;
    address = addr;
    cost = cst;
    location = loc;
    LandArea = Larea;
    building = build;
    BuildArea = Barea;
    }

    int ImmovableProperty::getIPropertyID(){
    return propertyID;
    }
    void ImmovableProperty::setIPropertyID(int id){
    propertyID = id;
    }

    string ImmovableProperty::getISurname(){
    return surname;
    }
    void ImmovableProperty::setISurname(string sname){
    surname = sname;
    }

    string ImmovableProperty::getIFirstname(){
    return firstname;
    }
    void ImmovableProperty::setIFirstname(string fname){
    firstname = fname;
    }

    string ImmovableProperty::getIAddress(){
    return address;
    }
    void ImmovableProperty::setIAddress(string addr){
    address = addr;
    }

    double ImmovableProperty::getICost(){
    return cost;
    }
    void ImmovableProperty::setICost(double cst){
    cost = cst;}

    string ImmovableProperty::getILocation(){
    return location;
    }
    void  ImmovableProperty::setILocation(string loc){
    location = loc;
    }

    double ImmovableProperty::getIAreaLocation(){
    return LandArea;
    }
    void ImmovableProperty::setIAreaLocation(double Larea){
    LandArea = Larea;
    }

    bool ImmovableProperty::getIBuilding(){
    return building;
    }
    void ImmovableProperty::setIBuilding(bool build){
    building = build;
    }

    double ImmovableProperty::getIAreaBuilding(){
    return BuildArea;
    }
    void ImmovableProperty::setIAreaBuilding(double Barea){
    BuildArea = Barea;
    }

   // ImmovableProperty::~ImmovableProperty(){
   // cout<<"Immovable property has been destroyed"<<endl;
   // }

class MovableProperty{
private:
    int propertyID;
    string surname;
    string firstname;
    string address;
    double cost;
    string propertytype;
    string enginecapacity;
    string model;
    string make;

public:
    MovableProperty();
    MovableProperty(int id, string sname, string fname, string addr, double cst,string proptype, string capacity, string modl, string mke);
    int getMPropertyID();
    void setMPropertyID(int id);
    string getMSurname();
    void setMSurname(string sname);
    string getMfirstname();
    void setMfirstname(string fname);
    string getMAddress();
    void setMAddress(string addr);
    double getMCost();
    void setMCost(double cst);
    string getMPropertyType();
    void setMPropertyType(string proptype);
    string getMEngineCapacity();
    void setMEngineCapacity(string capacity);
    string getMModel();
    void setMModel(string model);
    string getMMake();
    void setMMake(string mke);
   // ~MovableProperty();
};

    MovableProperty::MovableProperty(int id, string sname, string fname, string addr, double cst, string proptype, string capacity, string modl, string mke){
    propertyID = id;
    surname = sname;
    firstname = fname;
    address = addr;
    cost = cst;
    propertytype = proptype;
    enginecapacity = capacity;
    model = modl;
    make = mke;
    }

    int MovableProperty::getMPropertyID(){
    return propertyID;
    }
    void MovableProperty::setMPropertyID(int id){
    propertyID = id;
    }

    string MovableProperty::getMSurname(){
    return surname;
    }
    void MovableProperty::setMSurname(string sname){
    surname = sname;
    }

    string MovableProperty::getMfirstname(){
    return firstname;
    }
    void MovableProperty::setMfirstname(string fname){
    firstname = fname;
    }

    string MovableProperty::getMAddress(){
    return address;
    }
    void MovableProperty::setMAddress(string addr){
    address = addr;
    }

    double MovableProperty::getMCost(){
    return cost;
    }
    void MovableProperty::setMCost(double cst){
    cost = cst;}

    string MovableProperty::getMPropertyType(){
    return propertytype;
    }
    void MovableProperty::setMPropertyType(string proptype){
    propertytype = proptype;
    }

    string MovableProperty::getMEngineCapacity(){
    return enginecapacity;
    }
    void MovableProperty::setMEngineCapacity(string capacity){
    enginecapacity = capacity;
    }

    string MovableProperty::getMModel(){
    return model;
    }
    void MovableProperty::setMModel(string modl){
    model = modl;
    }

    string MovableProperty::getMMake(){
    return make;
    }
    void MovableProperty::setMMake(string mke){
    make = mke;
    }

    //MovableProperty::~MovableProperty(){
   // cout<<"Movable property has been destroyed"<<endl;
   // }

int main()

{
    ImmovableProperty ip(12, "Tom", "li", "Corromandel", 1000000.00, "PortLouis", 1500.00, true, 1000.00);
    MovableProperty mp(210, "jerry", "sim", "Triolet", 100000.00, "Car", "1500", "BMW-i8", "BMW");
    cout<<"PropertyID: "<<ip.getIPropertyID()<<endl;
    cout<<"Surname: "<<ip.getISurname()<<endl;
    cout<<"First name: "<<ip.getIFirstname()<<endl;
    cout<<"Address: "<<ip.getIAddress()<<endl;
    cout<<"Cost: "<<ip.getICost()<<"USD"<<endl;
    cout<<"Location of Property: "<<ip.getILocation()<<endl;
    cout<<"Area of Property: "<<ip.getIAreaLocation()<<" meter square"<<endl;
    if (ip.getIBuilding() == true){
        cout<<"Building present on property"<<endl;
        cout<<"Area of building: "<<ip.getIAreaBuilding()<<" meter square"<<endl;
    }
    cout<<""<<endl;

    cout<<"PropertyID: "<<mp.getMPropertyID()<<endl;
    cout<<"Surname: "<<mp.getMSurname()<<endl;
    cout<<"First name: "<<mp.getMfirstname()<<endl;
    cout<<"Address: "<<mp.getMAddress()<<endl;
    cout<<"Cost:RS "<<mp.getMCost()<<endl;
    cout<<"Type of Property: "<<mp.getMPropertyType()<<endl;
    cout<<"Capacity of Property: "<<mp.getMEngineCapacity()<<endl;
    cout<<"Model of Property: "<<mp.getMModel()<<endl;
    cout<<"Make of Property: "<<mp.getMMake()<<endl;

 //ImmovableProperty A;
   // cout<<"PropertyID: "<<A.getIPropertyID()<<endl;
   // cout<<"Surname: "<<A.getISurname()<<endl;

    return 0;
}
