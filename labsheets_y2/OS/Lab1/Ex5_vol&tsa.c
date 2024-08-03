//Ex 5

#include <stdio.h>
#include <math.h>

int main()

{
    double pi = 2*acos(0.0);
    double radius, volume , area;

     // Input radius
     printf("Enter radius of sphere \n");
     scanf("%lf", &radius);

    //Calculations
    
    volume = (4/3.0)*(pi)*(radius*radius*radius);
    area = (4)*(pi)*(radius * radius);

   // Printing values 

    printf("volume is %lf and surface area is %lf",volume,area);

    return 0;
}