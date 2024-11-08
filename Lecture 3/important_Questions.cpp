#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    // Q1
    // long long n = 19, factrial = 1;
    // for (int i = 1; i <= n; i++)
    {
        // factrial *= i;
    }
    // cout << factrial << endl;
    // Q2
    int n, startPoint, endPoint;
    // cout << "Enter the table name that user want: ";
    // cin >> n;
    // cout << "Enter the startPoint of the table: ";
    // cin >> startPoint;
    // cout << "Enter the EndPoint where the table should end: ";
    // cin >> endPoint;
    for (int i = startPoint; i <= endPoint; i++)
    {
        // cout << n << " x " << i << " = " << n * i << endl;
    }
    // Q4
    int prime = 51;
    bool isPrime = true;
    for (int i = 2; i < sqrt(prime); i++)
    {
        if (prime % 2 == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            cout << i;
        }
        }
}