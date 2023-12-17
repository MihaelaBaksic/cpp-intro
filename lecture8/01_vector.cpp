
#include <iostream>

using namespace std;

template <typename T>
class Vector
{
private:
    int sz;

    T* elements;

public:

    Vector(int size);
    ~Vector();

    T& operator[](int i) {
        if( i < 0 || sz < 1)
            throw out_of_range("Vector [] operator");

        return elements[i];
    }

    const T operator[](int i) const{
        if( i < 0 || sz < 1)
            throw out_of_range("Vector [] operator");

        return elements[i];
    }

    T* begin();
    T* end();

    int size();

};

template <typename T>
Vector<T>::Vector(int size): sz{size}
{
    if(sz < 0)
        throw invalid_argument("Negative vector size");

    elements = new T[sz];
}

template <typename T>
Vector<T>::~Vector(){ delete [] elements; }

template <typename T>
int Vector<T>::size() {return sz;}

template <typename T>
T* Vector<T>::begin() { return sz > 0 ? elements : nullptr; }

template <typename T>
T* Vector<T>::end() { return sz > 0 ? elements + sz : nullptr;}


int main()
{
    Vector<int> v(4);

    v[0] = 10;

    for(auto e : v)
        cout << e << endl;
}

