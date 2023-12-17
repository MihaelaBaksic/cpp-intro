#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
    list<int> l={0,1,2,3,4};
    vector<int> v;
    for(auto it=l.begin(); it!=l.end();it++){
        v.push_back(*it);
    }

    for(auto it=v.begin(); it!=v.end();it++){
        cout << *it;
    }
    cout << endl;

    vector<int> v2(l.begin(), l.end());
    for(auto it=v2.begin(); it!=v2.end();it++){
        cout << *it;
    }
    


    return 0;
}