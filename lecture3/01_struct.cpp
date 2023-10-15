#include<iostream>

using namespace std;


// Defining a structure Flower
struct Flower
{
    int petal_length;
    int sepal_length;
    std::string species; 
};

// Flower value initialization
void init_flower(Flower* f, int p_len, int s_len, std::string species)
{
    f->petal_length = p_len;
    f->sepal_length = s_len;
    f->species = species;
}

std::string flower_to_string(const Flower& f)
{
    return f.species + ": petal = " + to_string(f.petal_length) + " sepal = " + to_string(f.sepal_length);
}


int main()
{
    // Creating an object of type Flower;
    Flower f;

    //Initializing an object of type Flower;
    init_flower(&f, 10, 15, "setosa");

    cout << flower_to_string(f) << endl;

}