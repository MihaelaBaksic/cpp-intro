#include <iostream>
#include "05_declaration.h"

// function is implemented
int sum_first_n_numbers(int n)
{
    return (n+1)*n / 2;
}

int main()
{
    i = 10; // A variable is assigned a value (initialization by assignment)
    std::cout << sum_first_n_numbers(i) << std::endl;

    // x was initialized to the default value
    std::cout << x << std::endl;

    int j {15}; // Initialization list, saves you from conversion that looses information (i.e. int j = 14.5 looses information)
    // Initialization lists with {} are suggested in cpp
    // Overall rule of thumb: don't declare a local variable until you have a suitable value for it.
    std::cout << j << std::endl;


}