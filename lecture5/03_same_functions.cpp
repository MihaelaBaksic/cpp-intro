#include <iostream>
using namespace std;


class Base
{
public:
    void print() {cout << "Base print" << endl;}
};

class Derived: public Base
{
public:
    void print() {cout << "Derived print" << endl;} // Both Base and Derived have a method with same signature, but different implementation;
};


int main()
{
    Base b;
    Derived d;

    b.print(); // prints Base print
    d.print(); // prints Derived print


    // Trying the same with Base* pointers;

    Base* b_ptr = &b;
    Base* d_ptr = &d;
 
    b_ptr->print();
    d_ptr->print(); 
    // BOTH print Base print. Why?
    // Because compiler searches for a method depending on the pointer type, which is Base*
}