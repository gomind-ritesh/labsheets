#include <iostream>
using namespace std;

class MovableProperty
{

protected:

    int engineCapacity;

    string make;

public:
    MovableProperty();

    int getEngineCapacity();

    void setEngineCapacity(int eng);

    string getMake();

    void setMake(string mak);
   
 ~MovableProperty();

   
};

MovableProperty::MovableProperty(){

    cout<<"a movable property has been created"<<endl;
};


int MovableProperty::getEngineCapacity(){

    return engineCapacity;
}
void MovableProperty::setEngineCapacity(int eng){
    engineCapacity = eng;

}

string MovableProperty::getMake(){

    return make;
}
void MovableProperty::setMake(string mak){
    make = mak;

}
 MovableProperty::~MovableProperty(){cout<<"movable property destroyed"<<endl;};


int main(){

    int ec;
    string mk;

    MovableProperty Array[4];


    for(int i = 0 ;i<4 ; i++){

        cout<<"input engine capacity"<<endl;
        cin>>ec;
        cout<<"input make"<<endl;
        cin>>mk;

        Array[i].setEngineCapacity(ec);
        Array[i].setMake(mk);
        cout<<endl;

        cout<<Array[i].getEngineCapacity()<<endl;
        cout<<Array[i].getMake()<<endl;

    }
}

