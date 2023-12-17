#include <iostream>
#include <list>

using namespace std;

void ispis(const list<int> &l){
    for(auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
}

int main(){
    list<int> l;
    int size;
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    ispis(l);

    return 0;
}