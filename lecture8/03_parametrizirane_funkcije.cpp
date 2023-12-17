#include <iostream>

using namespace std;

int my_max(int i, int j) { 
    cout << "int max called" << endl;
    return i > j ? i : j;
}

int my_max(short i, short j)
{
    cout << "short max called" << endl;
    return i > j ? i : j;
}


template <typename T>
T my_max(T i, T j)
{
    cout << "Parametrized max called" << endl;
    return i > j ? i : j;
}


int main()
{
    cout << my_max(1, 4) << endl;
    cout << my_max(5.3, 4) << endl; // problem for int max, but parametrized max isn't called because i and j need to be of the same type
    cout << my_max(1.5, 2.5) << endl; // now that both are double the parametrized version is called

    cout << my_max(1, short(2)) << endl; // cannot decide which one to call
    
}