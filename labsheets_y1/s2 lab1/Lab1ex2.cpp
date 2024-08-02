#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
private:
    double width;
    double height;

public:
    Triangle();
    Triangle(double x, double y);
    double getWidth();
    void setWidth(double w);
    double getHeight();
    void setHeight(double h);
    double area();
    double perimeter();
    ~Triangle();
};
Triangle::Triangle()
{
    width = 0;
    height = 0;
}
Triangle::Triangle(double x, double y)
{
    width = x;
    height = y;
}
double Triangle::getWidth()
{
    return width;
}
void Triangle::setWidth(double w)
{
    width = w;
}
double Triangle::getHeight()
{
    return height;
}
void Triangle::setHeight(double h)
{
    height = h;
}


double Triangle::area()
{
    return 0.5 * width * height;
}
double Triangle::perimeter()
{
    return  (width + height + hypot(width,height));
}
Triangle::~Triangle()
{
}
int main()
{

    double w, h;
    cout << "Enter width of Triangle (m):";
    cin >> w;
    cout << "Enter height of Triangle (m):";
    cin >> h;
    Triangle tria(w, h);
    cout << "Area: " << tria.area() << " sq. metres" << endl;
    cout << "Perimeter: " << tria.perimeter() << " m" << endl
         << endl;
    return 0;
}