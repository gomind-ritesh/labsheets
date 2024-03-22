#include<iostream>
#include<fstream>
using namespace std;

// Question (a)

// Class interface for Immovable Property:

// For immovable properties, it needs to store the location (name of the town or village), the area of the land,
// whether it contains a building or not and the area of the building (if applicable).

class ImmovableProperty {
private:
    int propertyId;
    string surname;
    string firstname;
    string address;
    double cost;
    string location;  // (Additional variables from the question)
    double landArea;
    bool Building;
    double buildingArea;

public:
    ImmovableProperty();

    ImmovableProperty(int id, string sname, string fname, string addr, double cst, string loc, double landAr, bool hasBuild, double buildArea);

    int getPropertyId();
    void setPropertyId(int id);

    string getSurname();
    void setSurname(string sname);

    string getFirstname();
    void setFirstname(string fname);

    string getAddress();
    void setAddress(string addr);

    double getCost();
    void setCost(double cst);

    string getLocation();
    void setLocation(string loc);

    double getLandArea();
    void setLandArea(double landAr);

    bool getBuildingStatus();
    void setBuildingStatus(bool hasBuild);

    double getBuildingArea();
    void setBuildingArea(double buildArea);
};

// Class interface for Movable Property:

// For movable properties, it should store the type (car, lorry, bus), the engine capacity, model and make.

class MovableProperty {
private:
    int propertyId;
    string surname;
    string firstname;
    string address;
    double cost;
    string vehicleType;  // (Additional variables from the question)
    double engineCapacity;
    string vehicleModel;
    string vehicleMake;


public:
    MovableProperty();

    MovableProperty(int id, string sname, string fname, string addr, double cst, string type, double engCapacity, string model, string make);

    int getPropertyId();
    void setPropertyId(int id);

    string getSurname();
    void setSurname(string sname);

    string getFirstname();
    void setFirstname(string fname);

    string getAddress();
    void setAddress(string addr);

    double getCost();
    void setCost(double cst);

    string getVehicleType();
    void setVehicleType(string type);

    double getEngineCapacity();
    void setEngineCapacity(double engCapacity);

    string getVehicleModel();
    void setVehicleModel(string model);

    string getVehicleMake();
    void setVehicleMake(string make);
};

// Question (b)

// For Immovable Property
ImmovableProperty::ImmovableProperty() {}

ImmovableProperty::ImmovableProperty(int id, string sname, string fname, string addr, double cst, string loc, double landAr, bool hasBuild, double buildArea) {
    propertyId = id;
    surname = sname;
    firstname = fname;
    address = addr;
    cost = cst;
    location = loc;
    landArea = landAr;
    Building = hasBuild;
    buildingArea = buildArea;
}

int ImmovableProperty::getPropertyId() {
    return propertyId;
}
void ImmovableProperty::setPropertyId(int id) {
    propertyId = id;
}

string ImmovableProperty::getSurname() {
    return surname;
}
void ImmovableProperty::setSurname(string sname) {
    surname = sname;
}

string ImmovableProperty::getFirstname() {
    return firstname;
}
void ImmovableProperty::setFirstname(string fname) {
    firstname = fname;
}

string ImmovableProperty::getAddress() {
    return address;
}
void ImmovableProperty::setAddress(string addr) {
    address = addr;
}

double ImmovableProperty::getCost() {
    return cost;
}
void ImmovableProperty::setCost(double cst) {
    cost = cst;
}

string ImmovableProperty::getLocation() {
    return location;
}
void ImmovableProperty::setLocation(string loc) {
    location = loc;
}

double ImmovableProperty::getLandArea() {
    return landArea;
}
void ImmovableProperty::setLandArea(double landAr) {
    landArea = landAr;
}

bool ImmovableProperty::getBuildingStatus() {
    return Building;
}
void ImmovableProperty::setBuildingStatus(bool hasBuild) {
    Building = hasBuild;
}

double ImmovableProperty::getBuildingArea() {
    return buildingArea;
}
void ImmovableProperty::setBuildingArea(double buildArea) {
    buildingArea = buildArea;
}

ImmovableProperty::~ImmovableProperty(){
    cout<<"An immovable property has been destroyed."<<endl;
}

// For Movable Property
MovableProperty::MovableProperty() {}

MovableProperty::MovableProperty(int id, string sname, string fname, string addr, double cst, string type, double engCapacity, string model, string make) {
    propertyId = id;
    surname = sname;
    firstname = fname;
    address = addr;
    cost = cst;
    vehicleType = type;
    engineCapacity = engCapacity;
    vehicleModel = model;
    vehicleMake = make;
}

string MovableProperty::getSurname() {
    return surname;
}
void MovableProperty::setSurname(string sname) {
    surname = sname;
}

string MovableProperty::getFirstname() {
    return firstname;
}
void MovableProperty::setFirstname(string fname) {
    firstname = fname;
}

string MovableProperty::getAddress() {
    return address;
}
void MovableProperty::setAddress(string addr) {
    address = addr;
}

double MovableProperty::getCost() {
    return cost;
}
void MovableProperty::setCost(double cst) {
    cost = cst;
}

string MovableProperty::getVehicleType() {
    return vehicleType;
}
void MovableProperty::setVehicleType(string type) {
    vehicleType = type;
}

double MovableProperty::getEngineCapacity() {
    return engineCapacity;
}
void MovableProperty::setEngineCapacity(double engCapacity) {
    engineCapacity = engCapacity;
}

string MovableProperty::getVehicleModel() {
    return vehicleModel;
}
void MovableProperty::setVehicleModel(string model) {
    vehicleModel = model;
}

string MovableProperty::getVehicleMake() {
    return vehicleMake;
}
void MovableProperty::setVehicleMake(string make) {
    vehicleMake = make;
}

MovableProperty::~MovableProperty(){
    cout<<"A movable property has been destroyed."<<endl;
}

// Question (c)

int main() {

    // Create one ImmovableProperty object (named ip)
    ImmovableProperty ip(1, "Johnny", "Depp", "Rose Hill", 100000.0, "Mauritius", 400.0, true, 5000.0);

    // Create one MovableProperty object (named mp)
    MovableProperty mp(2, "James", "Charles", "Belle Rose", 200000.0, "car", 30.0, "BMW", "Italy");

    // Display information ImmovableProperty object (ip)
    cout << "Property ID: " << ip.getPropertyId() << endl;
    cout << "First Name: " << ip.getFirstname() << endl;
    cout << "Surname: " << ip.getSurname() << endl;
    cout << "Address: " << ip.getAddress() << endl;
    cout << "Property Cost: " << ip.getCost() << endl;
    cout << "Location: " << ip.getLocation() << endl;
    cout << "Land Area: " << ip.getLandArea() << endl;
    cout << "Has Building? " << (ip.getBuildingStatus() ) << endl;
    if (ip.getBuildingStatus() == true) {
        cout << "Building Area: " << ip.getBuildingArea() << endl;
    }
 
    // Display information MovableProperty object (mp)
    cout << "Property ID: " << mp.getPropertyId() << endl;
    cout << "First Name: " << mp.getFirstname() << endl;
    cout << "Surname: " << mp.getSurname() << endl;
    cout << "Address: " << mp.getAddress() << endl;
    cout << "Property Cost: " << mp.getCost() << endl;
    cout << "Vehicle Type: " << mp.getVehicleType() << endl;
    cout << "Engine Capacity: " << mp.getEngineCapacity() << endl;
    cout << "Vehicle Model: " << mp.getVehicleModel() << endl;
    cout << "Vehicle Make: " << mp.getVehicleMake() << endl;

    return 0;
}