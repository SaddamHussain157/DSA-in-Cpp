#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)

    {
        cout << "*";
        for (int col = 1; col <= n - 1; col++)
        {
            if (row == 1 || row == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "*";
        cout << endl;
    }
}