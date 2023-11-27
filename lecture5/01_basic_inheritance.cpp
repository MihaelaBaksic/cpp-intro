#include <iostream>

using namespace std;

class Base
{
private: // derived class nor outside code can access this
    int w = -10; 
public:
    int x = 0;

protected: // access modifier protected (only derived classes can access this)
    int y = 10;
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

    cout << b.x << endl;
    // cout << b.y << endl; // impossible, only derivedS classes can access protected base class members

    cout << d.x << endl; // derived class has x from base class
    cout << d.get_y() << endl; // derived class can access protected variable y
    cout << d.z << endl; // derived class has its own variable z
}