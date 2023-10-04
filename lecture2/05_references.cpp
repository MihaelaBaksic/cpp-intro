#include <iostream>

using namespace std;

int main()
{
    int i = 2;

    int& ref = i; // the address of i is stored to ref
    
    //int& ref2; // this we can't do, a reference must be initialized

    cout << ref << endl; // note that accessing an object is done automatically, unlike with pointers that have to be dereferenced


    // apart from the initial value and dereferencing, what is the difference between pointers and references
    // both contain addresses of objects
    // the language processes them differently
    // POINTERS -> assignment to pointers changes the address, meaning it starts pointing to other object, other part of the memory
    // REFERENCES -> assignment to references changes the value of the memory space, the reference still stores the same address 
    //  (this would also happen if you dereferenced a pointer and then assigned a value)

    // assignment to pointers
    int a = 5;
    int b = 10;

    int* p_1 = &a;
    int* p_2 = &b;
    cout << "Address: " << p_1 << " value: " << *p_1 << endl;
    cout << "Address: " << p_2 << " value: " << *p_2 << endl << endl;

    p_1 = p_2; // assignment to pointer
    cout << "Address: " << p_1 << " value: " << *p_1 << endl;
    cout << "Address: " << p_2 << " value: " << *p_2 << endl << endl << endl;


    // assignment to references
    int c = 5;
    int d = 10;

    int& r_1 = c;
    int& r_2 = d;

    cout << "Address: " << &r_1 << " value: " << r_1 << endl;
    cout << "Address: " << &r_2 << " value: " << r_2 << endl << endl;

    r_1 = r_2; // assignment to reference
    cout << "Address: " << &r_1 << " value: " << r_1 << endl;
    cout << "Address: " << &r_2 << " value: " << r_2 << endl << endl;


}