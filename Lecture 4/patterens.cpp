#include <iostream>
using namespace std;
int main()
{
    // int n = 4;
    // cout << "Enter the number: ";
    // // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // // Star patteren
    // cout << "\nstar patteren";
    // // cout << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // int n = 6;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }
    // int n = 3;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // char ch = 'A';
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // int num = 1;
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j <= i ; j++)
    //     {
    //         cout << i+1;

    //     }
    //     cout << endl;
    // }
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    return 0;
}