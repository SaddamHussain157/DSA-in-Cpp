#include <iostream>
using namespace std;
int main()
{
    // Q1
    // cout << (bool)3 + 2;
    // Q2 output?

    int x = 2, y = 5;
    int exp1 = (x * y / x);
    int exp2 = (x * (y / x));
    cout << exp1 << ",";
    cout << exp2 << "\n";
}