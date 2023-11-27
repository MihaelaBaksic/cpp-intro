#include <iostream>

using namespace std;

class Base
{
private:
    int x;

public:
    Base(int x): x{x}
    {
        cout << "Base constructor body" << endl;
    }
    ~Base() 
    {
        cout << "Base destructor" << endl;
    }

};

class Derived: public Base
{
private:
    int y;
public:
    Derived(int x, int y): Base(x), y{y}
    {
        cout << "Derived constructor body" << endl;
    }

    ~Derived()
    {
        cout << "Derived destructor" << endl;
    }

};


int main()
{
    Derived d(10, 11);
}