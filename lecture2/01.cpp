#include <stdio.h>

int main()
{

    double i = 10.0;

    for(int i=0; i < 5; i++)
        i++;

    printf("%lf\n", i); // lf denotes a double

    i++;
    printf("%lf\n", i);

    {
        int j = 0;
        i++; // the scope is searched from in to out, i is not found in the current scope, so the outer scope is searched, where i exist
    }

    //j = 1; // the variable j has fallen out of scope and we cannot access it 
}