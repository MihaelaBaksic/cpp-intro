#include<iostream>

using namespace std;

int sum_first_n(int n)
{
    return n*(n-1) / 2;
}


int main()
{
    int n = 10;
    int m = 15;

    cout << sum_first_n(n) << endl;
    cout << sum_first_n(m) << endl; 
}