#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= n; row++)
    {
        for (int col = 4; col >= row; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}