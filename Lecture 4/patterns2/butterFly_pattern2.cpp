#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int row = 1; row <= n; row++)
    {
        for (int str = 1; str <= row; str++)
        {
            cout << "*";
        }
        for (int space = 1; space <= (2 * (n - row)); space++)
        {
            cout << " ";
        }
        for (int str2 = 1; str2 <= row; str2++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = n; row >= 1; row--)
    {
        for (int str = 1; str <= row; str++)
        {
            cout << "*";
        }
        for (int space = 1; space < (2 * (n - row)); space++)
        {
            cout << " ";
        }
        for (int str2 = 1; str2 <= row; str2++)
        {
            cout << "*";
        }
        cout << endl;
        cout << row;
    }
}
