#include <iostream>

using namespace std;


class Vector
{
private:
    int sz;
    double *v;

public:

    Vector(int s): sz{s}, v{new double[sz]} {}
    ~Vector(){ delete v; }


    // Overloading operator [] for non-const vector objects
    double& operator[](int i){ 
        return v[i];
    }

    // Overloading operator [] for const vector objects
    double operator[](int i) const{
        return v[i];
    }
    
};


int main()
{
    Vector v1(2);
    const Vector v2(3);

    cout << v1[0] << endl;
    v1[0] = 2;
    cout << v1[0] << endl;  // the value of v1[0] is changed by the previous line (this is possible because we returned a reference)

    cout << v2[0] << endl;
    // v2[0] = 1; // impossible
}