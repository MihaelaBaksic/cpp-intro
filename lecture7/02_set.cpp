#include <iostream>
#include <set> // standard library header with lists

using namespace std;

template <typename T>
void print_set(set<T>& s) // prints list of any type, we'll talk about this later
{
    for(auto i : s) // we can iterate through a set
        cout << i << " " ;
    cout << endl;
}

int main()
{

    set<double> s = {1.3, 5.2, 6.}; // initializing a set of type double

    s.insert(12.); // inserting element
    s.insert(-2.);

    print_set(s);


    int removed = s.erase(6.); // deleting all elements with value 6.
    print_set(s);


    // element lookup
    double val = 1.3;
    cout << "Number of " << val << "? " << s.count(val) << endl;
    s.insert(1.3);
    cout << "Number of " << val << "? " << s.count(val) << endl; // it is either 0 or 1

    val = 22.;
    cout << "Number of " << val << "? " << s.count(val) << endl; // it is either 0 or 1

    
}