#include <vector>
#include <iostream>

using namespace std;

template<typename T>
void print_sequential_container(T& c)
{
    for (auto elem: c)
        cout << elem << " ";
    cout << endl;
}

int main()
{
    vector<int> v; // empty vector
    
    v.push_back(1); // add to conteiner 
    v.push_back(3);

    print_sequential_container(v);

    v.emplace((v.begin()+1), 5); // add element at the iterator position
    
    print_sequential_container(v);
    v.erase(v.begin()), // erasing element on position 0

    cout << v[0] << endl; // we can index vectors because the memory is contiguous

    cout << "Size: " << v.size() << endl;
    cout << "Max size: " << v.max_size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    

    v.shrink_to_fit(); // shrinks the vector to the number of elements (size)
    cout << "Capacity after shrinking: " << v.capacity() << endl;

    v.resize(10); // resizing to size 10
    cout << "Capacity after resizing: " << v.capacity() << endl;



    // initializing the vector of size 10 with value 2
    vector v2(10, 2);
    print_sequential_container(v2);    
}