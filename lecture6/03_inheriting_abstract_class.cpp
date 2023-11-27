#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846;

class Shape
{
public:
    virtual double circumference() = 0; // pure virtual function

    virtual void print() { std::cout << "Shape" << std::endl;}
};


class Circle: public Shape
{
private:
    double center_x, center_y, radius;

public:
    Circle(double x, double y, double r): Shape(), center_x{x}, center_y{y}, radius{r} {}
    virtual double circumference() { return 2*radius* PI;} // implementation of pure virtual function from Shape

};

int main()
{
    Circle c(1,2,10);
    cout << c.circumference() << endl;
}