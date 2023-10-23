#include<iostream>
#include<cassert>

using namespace std;

int digit_sum(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    assert(digit_sum(2) == 2);
    assert(digit_sum(10) == 1);
    assert(digit_sum(13) == 4);
    assert(digit_sum(112340) == 11);
    assert(digit_sum(9721) == 19);
}