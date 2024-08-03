//Ex 3
#include <stdio.h>
#include <math.h>

void areavol(double radius,double *area , double *vol)

{
    double pi = 2*acos(0.0);
    
    //Calculations
    
    *vol = (4/3.0)*(pi)*(pow((radius),3));
    *area = (4)*(pi)*(pow((radius),2));
}


int main(){

    double radius,area,vol,warea,wvol;

    // Input radius of larger sphere
    printf("Enter radius of larger sphere \n");
    scanf("%lf", &radius);

    areavol(radius,&warea,&wvol);

    // Input radius of smaller sphere
    printf("Enter radius of smaller sphere \n");
    scanf("%lf", &radius);

    areavol(radius,&area,&vol);

    warea = warea +area;
    wvol = wvol - vol;

    printf("The volume of water is : %lf , and the total surface area of water is : %lf",wvol,warea);

    return 0;
}
