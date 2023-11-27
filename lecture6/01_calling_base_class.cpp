#include <iostream>

using namespace std;

class Mammal
{
private:
    int num_legs;
protected:
    bool has_tail;
public:

    Mammal(int num_legs, bool has_tail = false): num_legs{num_legs}, has_tail{has_tail} {} 

    virtual void print() { std::cout << "Mammal" << endl;}
    int get_num_legs() {return num_legs;}
};

class Cat : public Mammal
{
private:
    std::string color;

public:
    Cat(std::string color): Mammal(4, true), color{color} {}

    void print() 
    {
        Mammal::print();
        cout << "Cat with " << get_num_legs() << " legs" << endl;

    } 
};


int main()
{
    Cat c("black");
    c.print();
}
