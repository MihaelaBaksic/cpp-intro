

int multiply(const int x, const int y)
{ 
    // x = 1; we cannot change the value of x because it is declared const
    return x*y;
}


int main()
{
    const int i = 0; // we tell the compile we will not change the value of i
    //i = 2; // if we try to change the value of i, we get a compilation error

    int j = multiply(2, 4);

}