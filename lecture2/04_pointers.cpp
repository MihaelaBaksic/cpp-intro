#include<iostream>

using namespace std;

int main()
{

    int j = 12; 
    int* j_p = &j; // j_p points to object named j
    int* j_q {&j}; // j_q points to the same object

    cout <<  *j_p << endl; // accessing the value of the pointer by dereferencing

    *j_p = 15;
    cout << *j_q << endl; // j_p and j_q point to the same object, so if the value is changed through one pointer, the other one also sees the change


    int* p; // declaration of a pointer to integer variable, contains an address
    cout << p << endl; // contains a random address
    cout << *p << endl; // if we try to access it we get some garbage

    p = nullptr;
    cout << p << endl; // numerical representation of a nullptr is 0
    //cout << *p << endl; // if we try to access a nullptr, we get a segmentation fault

    /* How to not get a segmentation fault but also not accidentally read garbage values???
     1a if you have an appropriate object you wish the pointer point to it, assign it upon declaration;
     1b if you don't have the object, initialize it to a nullptr;
     2 check if the pointer is nullptr
     3a if the pointer is not nullptr proceed as planned
     3b if the pointer in nullptr proceed with an alternative (usually exit with returning a default value for operation or throwing an exception - more about it later)
    */

    // Example:
    double * q = nullptr;

    // do something that might assign a object address to q, but might as well not
    // ...


    if(q) // equivalent to if(q != nullptr)
        cout << *q << endl;
    else
        cout << "q is nullptr" << endl << endl;


    
    // pointer arithmetic (+ and -)
    int x[] = {111, 222, 333};

    int* ptr = &x[0];

    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    cout << *(ptr - 1) << endl << endl;

    // pointer to a pointer

    int a = 12;
    int* b = &a;
    int** c = &b;

    cout << *c << endl;
    cout << **c << endl;



}