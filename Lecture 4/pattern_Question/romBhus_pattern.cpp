#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i <= n; i++)
    {
        for (int sp = 1; sp <= n - i; sp++)
        {
            cout << " ";
        }
        for (int str = 0; str <= 0; str++)
        {
            cout << "****";
        }
        cout << endl;
    }
}