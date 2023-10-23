#include <iostream>
#include <cassert>

using namespace std;


int reverse_digits(int n)
{
    int n_reverse = 0;

    while(n > 0)
    {
        n_reverse *= 10;
        n_reverse += n % 10;
        n /= 10;
    }

    return n_reverse;
}


int main()
{
    assert(reverse_digits(1235) == 5321);
    assert(reverse_digits(0) == 0);
    assert(reverse_digits(10) == 1); // the leading zeroes are dropped
}