#include <iostream>
using namespace std;
int main()
{
    // for (int i = 0; i < 4; i++)
    // {

    //     cout << "1234" << endl;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;

    // }
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i <=4; i++)
    // {
    //     for (int j = 4; j >= i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (i + j <= 5)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    int row = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int space = 0; space < (row - i); space++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}