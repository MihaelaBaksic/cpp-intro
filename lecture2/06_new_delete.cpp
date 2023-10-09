#include<iostream>

using namespace std;

int main()
{
    int* i = new int(1);
    cout << *i << endl;
    delete i;


    // getting a reference from a pointer
    double* d = new double(2.3);
    double& r = *d;

    cout << r << endl;
    cout << *d << endl;
    delete d;
    
    //cout << r << endl; // this is a problem, now it contains garbage

    int* arr = new int[3]; // pointer to the first element
    // initialize an array:
    for(int j=0; j < 3; j++ )
        *(arr + j)= 0;

    for(int j=0; j < 3; j++ )
        cout << *(arr + j) << endl;

    delete [] arr; // deleting an array

}