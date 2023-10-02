#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    cout << "You have started the program with " << argc << " arguments." << endl;

    cout << "The values of arguments are:" << endl;

    for(int i=0; i<argc; i++)
    {
        cout << argv[i] << endl;
    }
}