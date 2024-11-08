#include <iostream>
using namespace std;
int main()
{
    int val = false;
    int n = 4;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            val = !val;
            cout << val << " ";
        }
        cout << endl;
    }
}