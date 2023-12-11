#include <iostream>
#include <list> // standard library header with lists

using namespace std;

template <typename T>
void print_list(list<T>& l) // prints list of any type, we'll talk about this later
{
    for(auto i : l) // we can iterate through a list
        cout << i << " " ;
    cout << endl;
}

int main()
{
    
    list<int> l = {1, 3, 5, 7}; // list with elements of type int, initialized using an initializer list
    
    l.push_front(0); // adding to the front
    l.push_back(2); // adding to the back

    print_list<int>(l);     

    l.pop_back(); // removes last element
    l.pop_front(); // removes first element


    // accessing element at position 3
    list<int>::iterator it = l.begin(); // iterator pointing to the first element
    advance(it, 3); // move iterator for 3 positions 
    cout << *it << endl; // access the element on index 3

    // all manipulation of elements at index idx is done through iterators
    int idx = 2;
    list<int>::iterator insert_it = l.begin(); // beginning of the list iterator
    advance(insert_it, idx); // move iterator to idx
    int value = 20;
    l.insert(insert_it, 20); // insert value to position idx

    print_list(l);

    list<int>::iterator remove_it = l.begin();
    idx = 1;
    advance(remove_it, idx);
    l.erase(remove_it); // removes element at idx 1

    print_list(l);

    l.push_back(1);
    print_list(l);
    l.remove(1); // removes all elements with value 1
    print_list(l);

}