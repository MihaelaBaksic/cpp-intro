#include <iostream>
#include <cstdbool>
#include "10_complex.h"

using namespace std;

int main()
{
    Complex c1(10, 2);
    Complex c2(-1, 4);
    Complex c3(-2, 4);

    Complex c4 = c1 + c2;
    cout << c4 << endl;

    c4 = c1 - c2;
    cout << c4 << endl;

    c4 = c1 * c2;
    cout << c4 << endl;

    c4 = c1 / c2;
    cout << c4 << endl << endl;

    c1 += c2;
    cout << c1 << endl;
    c1 -= c3;
    cout << c1 << endl;
    c1 *= c2;
    cout << c1 << endl;
    c1 /= c4;
    cout << c1 << endl << endl;


    Complex c5(0, -23.2);
    Complex c6(0, -23.2);
    cout << boolalpha;
    cout << (c5 == c6) << endl;
    cout << (c5 == c2) << endl;

    
}