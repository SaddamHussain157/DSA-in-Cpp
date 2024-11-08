#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= (2 * row - 1); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int str = 1; str <= (2 * i - 1); str++)
        {
            cout << "*";
        }
        cout << endl;
    }
}