#include<iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    int z = x + x * y;
    cout << z << " ";
    z = y / x * x;
    cout << z << " ";
    return 0;
}