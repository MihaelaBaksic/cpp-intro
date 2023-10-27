#include <iostream>
#include "08_average.h"



double calculate_average(double i, double j)
{
    return (i+j) / 2;
}

double calculate_average(int n, double* arr)
{
    double sum = 0;
    for(int i=0; i<n; i++)
        sum += arr[i];

    return sum / n;
}

