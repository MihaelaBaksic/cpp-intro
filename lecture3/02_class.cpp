#include<iostream>

using namespace std;


// Class representing a collection of a fixed number of doubles
class Collection
{
private: // default access modifier
    int size; // number of elements in the storage
    double* storage; // an array of doubles

public:
    // Default constructor
    Collection(): size{20}, storage{new double[size]} {}

    // Constructor with initializer list
    Collection(int s): size{s}, storage{new double[size]} 
    {
        for(int i=0; i<size; i++)
            storage[i] = 1; // initialize all values to 1
    }

    //Destructor  used when we need to manually deallocate memory
    ~Collection() { 
        cout << "Calling destructor" << endl;
        delete[] storage; }


    // Useful methods
    double get_value(int i){ return storage[i]; }
    void set_value(int i, double val) { storage[i] = val; }

    // since size is private, this function allows us to access values of the storage
    int get_size() { return size; }

};


int main()
{
    Collection c = Collection(5); // Creating on stack (but the storage array is still on heap)

    Collection* c1 = new Collection(10); // Creating on heap

    Collection two_collections[] = {Collection(10), Collection()}; // Array of two collections, no need to call delete
    Collection* two_new_collections = new Collection[2]; // Array of two collections on heap, need to call delete, default constructor is called

    c.get_size();
    c1->get_size(); // equivalent to dereferencing and then calling: (*c1).get_size();

    // No need to explicitly call a destructor for c, it will happen when c goes out of scope because it is a named object 
    // We need to call a desctructor of c1 because it is in free memory
    delete c1;

    // Since two_collections are an array we need to explicitly call the delete operator for every element of array
    delete [] two_new_collections;

}