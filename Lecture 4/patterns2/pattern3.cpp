#include <iostream>
using namespace std;
int main()
{
    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 5; col > row; col--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // We can also do this pattern in other way
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        // Always remamaber the the names of the outerloop and inner loop will makes you very difficult in some cases if you have mistakes on the namings of the inner and outer loops
        {
            cout << "* ";
        }
        cout << endl;
    }
}