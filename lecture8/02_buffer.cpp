#include <vector>
#include <iostream>

using namespace std;


template <typename T, int n>
class Buffer
{
private:
    using value_type = T;    // allows the type to be accessed
    int size() { return n; }

    T buff[n];
};


int main()
{
    Buffer<int,1024> b; // buffer of size 1024, storing ints
}

