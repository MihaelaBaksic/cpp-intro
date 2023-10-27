#include "10_complex.h"

Complex Complex::operator+(Complex& other)
{
    Complex c(this->re + other.re, this->im + other.im);
    return c;
}

Complex Complex::operator-(Complex& other)
{
    Complex c(this->re - other.re, this->im - other.im);
    return c;
}

Complex Complex::operator*(Complex& other)
{
    double re = this->re*other.re - this->im*other.im;
    double im = this->re*other.im - this->im*other.re;
    Complex c(re, im);
    return c;
}

Complex Complex::operator/(Complex& other)
{
    double re = this->re*other.re + this->im*other.im;
    double im = this->im*other.re - this->re*other.im;
    double divisor = other.im*other.im + other.re*other.re;
    Complex c(re/divisor, im/divisor);
    return c;
}

Complex& Complex::operator+=(Complex& other)
{
    this->re = this->re + other.re;
    this->im = this->im + other.im;
    return *this;
}

Complex& Complex::operator-=(Complex& other)
{
    this->re = this->re - other.re;
    this->im = this->im - other.im;
    return *this;
}

Complex& Complex::operator*=(Complex& other)
{
    double re = this->re*other.re - this->im*other.im;
    double im = this->re*other.im - this->im*other.re;
    this->re = re;
    this->im = im;
    return *this;
}

Complex& Complex::operator/=(Complex& other)
{
    double re = this->re*other.re + this->im*other.im;
    double im = this->im*other.re - this->re*other.im;
    double divisor = other.im*other.im + other.re*other.re;
    this->re = re/divisor;
    this->im = im/divisor;
    return *this;
}



bool Complex::operator==(Complex& other)
{
    return this->re == other.re && this->im == other.im;
}


std::ostream& operator<<(std::ostream& os, Complex& c)
{
    os << "Complex(re=" << c.re << ", im=" << c.im << ")";
    return os;
}