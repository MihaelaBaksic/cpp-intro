#include <iostream>

using namespace std;

class Base
{
private: // derived class nor outside code can access this
    int w = -10; 

protected: // access modifier protected (only derived classes can access this)
    int y = 10;

public:
    int x = 0;
    int get_private_w() {return w;}
};


class Derived : public Base // extending syntax
{
public:
    int z = 20;

    int get_y() {return y;}
};


int main()
{

    Base b;
    Derived d;

    cout << b.get_private_w() << endl;
    cout << d.get_private_w() << endl; // we can access the base function from a derived object
}