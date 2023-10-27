#include <iostream>

class Complex
{
private:
    double re, im = 0.0;

public:

    Complex(double re, double im): re{re}, im{im} {}
    Complex(double re): re{re}, im{0.0} {}
    Complex(): re{0.0}, im{0.0} {}


    bool operator==(Complex& other);

    // basic math operators
    Complex operator+(Complex& other);
    Complex operator-(Complex& other);
    Complex operator/(Complex& other);
    Complex operator*(Complex& other);


    // Augmented assignment operators
    Complex& operator+=(Complex& other);
    Complex& operator-=(Complex& other);
    Complex& operator/=(Complex& other);
    Complex& operator*=(Complex& other);


    friend std::ostream& operator<< (std::ostream& os, Complex& c);

};



std::ostream& operator<< (std::ostream& os, Complex& c); 