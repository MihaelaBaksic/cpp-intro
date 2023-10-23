#include <cmath>
#include <iostream>

#include <cassert>

using namespace std;

bool is_prime(int n)
{
    for(int i=2; i<=sqrt(n); i++ )
    {
        if(n % i == 0)
            return false;
    }
    return true;
}


int main()
{
    cout << std::boolalpha << is_prime(1) << endl; // true
    cout << std::boolalpha << is_prime(2) << endl; // true
    cout << std::boolalpha << is_prime(10) << endl; // false
    cout << std::boolalpha << is_prime(49) << endl; // false

    // instead of printing the results and manually concluding they are correct we can program it :)
    // if the condition in the parenthesis is true, the execution continues without change (assertion passed)
    // if the condition in the parenthesis is false, the execution stops (assertion failed)
    assert(is_prime(1) == true); 

    //assert(is_prime(9) == true); // this will stop the program
    //assert(is_prime(9) == true && "is_prime(9) == true failed"); // if the assertion fails the message is printed

    // there are better ways of testing your program's functionality, but we will talk about that later :)
}