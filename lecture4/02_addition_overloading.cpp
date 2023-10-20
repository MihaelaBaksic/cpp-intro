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

    double& operator[](int i){ 
        return v[i];
    }

    double operator[](int i) const{
        return v[i];
    }

    // Operator + overloading
    Vector operator+(const Vector& vec)
    {
        Vector new_vec(this->sz);

        for(int i=0; i<this->sz; i++)
            new_vec.v[i] = this->v[i] + vec.v[i];

        return new_vec;
    }    


    Vector& operator+=(const Vector& vec)
    {
        for(int i=0; i < this->sz; i++)
            this->v[i] += vec.v[i];

        return *this;
    }

};


int main()
{
    Vector v1(2);
    v1[0] = 1;
    v1[1] = 5;

    Vector v2(2);
    v2[0] = 3;
    v2[1] = 6;

    Vector result = v1 + v2;
    cout << result[0] << endl; // 4
    cout << result[1] << endl; // 11

    v1 += v2;
    cout << v1[0] << endl; // 4
    cout << v1[1] << endl; // 11
}
