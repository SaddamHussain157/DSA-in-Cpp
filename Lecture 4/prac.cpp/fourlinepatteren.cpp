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
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}