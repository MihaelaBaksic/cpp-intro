#include<iostream>

int main()
{
    // 1. If statements

    int a = 2;
    if( a > 2)
    {
        printf("%d is more than 2\n", a);
    }
    else if(a < 1)
    {
        printf("%d is less than 1\n", a);
    }
    else
    {
        printf("%d is in [1, 2]\n", a);
    }

    // If the code of a if/else code block is a single line, the braces can be ommitted. i.e:
    if(1 < 2)
        printf("This is true\n");



    // Looping
    printf("\n\n");
    printf("Looping...");
    for(int i=0; i < 10; i++)
    {
        printf("Number %d,\n", i);
    }

    int i = 0;
    while(i < 3){
        i++;
        printf("While number: %d\n", i);
    }

    int j=0;
    do
    {
        printf("Do-While number: %d\n", j);
        j++;
    }
    while( j < 3);

    
}