#include <iostream>
#include <cmath>
using namespace std;
class circle
{
private:
    double radius;

public:
    circle();
    circle(double x);
    double getradius();
    void setradius(double w);
    double area();
    double perimeter();
    ~circle();
};

circle::circle()
{
    radius = 0;
}

circle::circle(double x)
{
    radius = x;
}

double circle::getradius()
{
    return radius;
}
void circle::setradius(double w)
{
    radius = w;
}

double circle::area()
{
    return M_PI* radius * radius;
}
double circle::perimeter()
{
    return 2* M_PI *(radius);
}
circle::~circle()
{
}
int main()
{
    double w;
    cout << "Enter radius of circle (m):";
    cin >> w;
    circle sqr(w);
    cout << "Area: " << sqr.area() << " sq. metres" << endl;
    cout << "Perimeter: " << sqr.perimeter() << " m" << endl
         << endl;
    return 0;
}