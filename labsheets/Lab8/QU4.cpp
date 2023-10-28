#include <iostream>
using namespace std;


float spherevolume(float myradius)

{

float the_volume,pi;
pi=3.142;

the_volume=(4.0/3)*pi*myradius*myradius*myradius;

return the_volume;

}

int main()

{ 
float radius1, radius2,volwater,vol1,vol2;

cout<<"input radius of larger sphere= "<<endl;

cin>>radius1;

cout<<"input radius of larger sphere= "<<endl; cin>>radius2;

vol1=spherevolume(radius1); 
vol2=spherevolume(radius2);

volwater=vol1-vol2;

cout<<"volume of water is "<<volwater<<endl;

return 0;
}