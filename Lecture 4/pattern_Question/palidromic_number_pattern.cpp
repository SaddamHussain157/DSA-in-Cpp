#include <iostream>
using namespace std;
int main()
{

    // Palindromic Pattern with Numbers
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // nums backward
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        // nums forward
        for (int j = 2; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}