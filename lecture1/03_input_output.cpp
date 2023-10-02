#include <stdio.h> // C library for standard I/O
#include <iostream> // C++ library for I/O streams


int main()
{
    int i = 20;
    float f = 20.45;
    std::string s = "Maria";
    char c_string[] = "Diana";

    // 1. C-printing: first argument is a string with gaps for values given as other arguments
    // %s is filled with a string
    // %d is filled with an integer
    // %f is filled with a float
    printf("Hello, %s.\nI am %d years old.\nThe bank account balance is :%f\n", c_string, i, f);


    // 2. Using cout and endl (endl adds the new line character and flushes the standard output stream)
    std::cout << "I am " << 25 << " years old." << std::endl;


    // 3. Using cout and newline special character
    std::cout << "I am " << 33 << " years old.\n";


    // Read from standard input
    std::string input;

    std::cout << "Insert a number from 0 to 20: ";
    // Everything read from the standard input is a string, it must be manually converted to other types
    std::cin >> input;
    int input_number = stoi(input); // converting from string to integer by calling a function stoi(string)

}