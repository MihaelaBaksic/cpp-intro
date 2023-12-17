#include <iostream>
#include <map>
using namespace std;

int main() {
    map <int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        m[i] = i*i; 
    }

    for (auto it = m.begin(); it != m.end(); it ++) {
        cout << it->first << ":" << it->second << endl;
    }
    return 0;
}