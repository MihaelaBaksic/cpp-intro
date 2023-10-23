#include <iostream>
#include <cassert>

using namespace std;

int sum_9_divisible(int lower, int upper)
{
    int sum = 0;
    for(int i=lower; i<=upper; i++)
    {
        if( i%9 == 0)
            sum += i;
    }

    return sum;
}

int main()
{
    int lower = 100;
    int upper = 500;

    cout << sum_9_divisible(lower, upper) << endl;

}