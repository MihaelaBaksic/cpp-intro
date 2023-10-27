#include<iostream>
#include "09_point_triangle.h"

using namespace std;

int main()
{
    double inputs[6];

    for(int i=0; i<3; i++)
    {
        cout << "Enter coordinate x:" << endl;
        cin >> inputs[i*2];
        cout << "Enter coordinate y:" << endl;
        cin >> inputs[i*2 + 1];
    }


    Triangle t(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4], inputs[5]);
 
    cout << t.circumference() << endl;
    t.translate(1, -1);
    cout << t.circumference() << endl;



}