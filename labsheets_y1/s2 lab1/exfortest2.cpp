#include <iostream>
using namespace std;

class Property {

protected:

int propertyID;

//unique id of property

double cost;

//value of the property

public:

Property();

int getPropertyID();

void setPropertyID(int id);

double getCost();

void setCost(double cst);

~Property();

};
Property::Property(){


}


int Property::getPropertyID(){
    return propertyID;
}

void Property::setPropertyID(int id){

  propertyID = id;
}

double Property::getCost(){
    return cost;
}

void Property::setCost(double cst){

  cost = cst;
}

Property::~Property(){
   cout<< "property has been destroyed";
}

    int main(){



        Property Array[3];
        int id;
        double cost;


        for(int i=0; i<3; i++){

            cout<<"input id";
            cin>> id;
            Array[i].setPropertyID(id);

            cout<<"input cost";
            cin>> cost;
            Array[i].setCost(cost);


        }
             for(int i=0; i<3; i++){


            cout<<"Id is "<<Array[i].getPropertyID()<<endl;

            cout<<"cost is "<<Array[i].getCost()<<endl;


        }
    }