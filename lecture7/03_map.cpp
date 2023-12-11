#include <map> // including maps
#include <iostream>

using namespace std;

template<typename T, typename U>
void print_map(map<T,U>& m)
{
    cout << "{ ";
    for(auto el: m)
        cout << el.first << ": " << el.second << ", ";
    cout << " }" << endl;
}


int main()
{
    map<int,string> m; // empty map

    m[1] = "one"; // adding value "one" to key 1
    print_map(m);

    m.insert(pair<int,string>(2, "two")); // adding a pair of key-value
    print_map(m);


    m.erase(2); // erasing element with key 2
    print_map(m);
}