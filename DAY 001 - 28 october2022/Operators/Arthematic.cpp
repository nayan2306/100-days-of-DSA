#include<iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    cout << (x+y) << " ";
    cout << (x*y) << " ";
    cout << (x%y) << " ";
    int z = x++;
    cout << x << " " << z << " ";
    z = ++x;
    cout << x << " " << z << " ";
    return 0;
    double w = x/y;
    cout << w;
    double v = (double)x/y;
    cout << v;
}