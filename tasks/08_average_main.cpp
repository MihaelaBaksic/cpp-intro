#include <iostream>
#include "08_average.h"

using namespace std;

int main()
{
    cout << calculate_average(2, 5) << endl;

    int n = 5;
    double * arr = new double[n] {1, 2, 3, 4, 5};

    cout << calculate_average(n, arr) << endl;

}