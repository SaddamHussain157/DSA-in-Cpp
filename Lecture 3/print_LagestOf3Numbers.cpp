#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    if (a >= b && a >= c)
    {
        cout << "A is largest: " << a;
    }
    else if (b >= a && b >= c)
    {
        cout << "b is largest: " << b;
    }
    else
    {
        cout << "C is largest: " << c;
    }
}