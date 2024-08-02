#include <iostream>
using namespace std;
class square
{
private:
    int width;

public:
    square();
    square(int x);
    int getWidth();
    void setWidth(int w);
    int area();
    int perimeter();
    ~square();
};

square::square()
{
    width = 0;
}

square::square(int x)
{
    width = x;
}

int square::getWidth()
{
    return width;
}
void square::setWidth(int w)
{
    width = w;
}

int square::area()
{
    return width * width;
}
int square::perimeter()
{
    return 4 * (width);
}
square::~square()
{
}
int main()
{
    int w;
    cout << "Enter width of square (m):";
    cin >> w;
    square sqr(w);
    cout << "Area: " << sqr.area() << " sq. metres" << endl;
    cout << "Perimeter: " << sqr.perimeter() << " m" << endl
         << endl;
    return 0;
}