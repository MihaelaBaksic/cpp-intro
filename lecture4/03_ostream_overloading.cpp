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

    friend ostream& operator<<(ostream& os, const Vector& v);

};

ostream& operator<<(ostream& os, const Vector& v)
{
    os << "[ ";
    for(int i=0; i< v.sz; i++)
        os << v.v[i] << " " ;
    os << "]";
    return os;
}


int main()
{
    Vector v(3);
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    cout << v << endl;

}