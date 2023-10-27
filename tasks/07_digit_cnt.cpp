#include <iostream>
#include <ctype.h> 


using namespace std;

int cnt_digits(string str)
{
    int cnt = 0;
    for(auto c : str)
    {
        if(isdigit(c))
            cnt++;
    }
    return cnt;
}


int cnt_digits_no_lib(string str)
{
    int cnt = 0;
    for(auto c : str)
    {
        if( c == '0' || c == '1' || c=='2' ||  c=='3' ||
            c =='4' || c=='5' || c=='6' ||c=='7' || c=='8' || c=='9' )
            cnt++;
    }
    return cnt;
}


int main()
{

    string s;
    cin >> s;


    cout << "Digits (with lib): " << cnt_digits(s) << endl;
    cout << "Digits (no lib): " << cnt_digits_no_lib(s) << endl;
    

}