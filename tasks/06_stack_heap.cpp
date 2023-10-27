#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    
    int stack[n];
    int* heap = new int[n];

    for(int i=0; i<n; i++)
    {    
        stack[i] = 0;
        heap[i] = 0;
    }

    delete heap;  


}