#include <iostream>
using namespace std;
int quotient(int n)
{
    int n2 = n / 2;
    return n2;
}
int remainer(int n)
{
    int n3 = n % 2;
    return n3;
}
int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "quotient: " << quotient(n) << endl
         << "Remainder: "
         << remainer(n) << endl;
}