#include <iostream>

using namespace std;


class Base
{
public:
    virtual void print() { cout << "Base print" << endl; } // virtual function
};

class Derived: public Base
{
public:
    void print() { cout << "Derived print" << endl; } // this function is also virtual, despite omitting the keyword virtual
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
 
    b_ptr->print(); // orints Base print
    d_ptr->print(); // prints Derived print
    // Why? The compiler searches for function in a virtual function table, 
    // which is different for object b_ptr and d_ptr point to
    // We have achieved dynamic polymorphism, different behaviour on a seemingly same object
}