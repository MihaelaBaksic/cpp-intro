#include<iostream>

using namespace std;

namespace first_namespace
{
    int my_function(int i)
    {
        return i+1;
    }
}

namespace second_namespace
{
    int my_function(int i)
    {
        return i-1;
    }
}


int main(int argc, char** argv)
{
    cout << first_namespace::my_function(atoi(argv[1])) << endl;
}