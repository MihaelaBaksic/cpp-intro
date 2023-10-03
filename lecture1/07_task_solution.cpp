#include <iostream>

using namespace std;

int main()
{
    string input;
    int cnt = 0;
    int sum = 0;
    do
    {
        cin >> input;
        
        if(input == "END")
            break;

        int num_input = stoi(input);
        cnt++;
        sum += num_input;

    } while (true);

    cout << "Avg: " << sum/cnt << endl;
    
}