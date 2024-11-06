#include <iostream>
using namespace std;
int main()
{
    char character = 'A';
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << character++;
            // character++;
        }
        cout << endl;
    }
}