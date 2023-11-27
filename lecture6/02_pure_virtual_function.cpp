#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void circumference() = 0; // pure virtual function

    virtual void print() { std::cout << "Shape" << std::endl;}
};


int main()
{
    Shape s; // not allowed because s is abstract
}