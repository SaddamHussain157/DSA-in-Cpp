#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int n = 322222205;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime)
    {
        cout << "it is a Prime number: " << endl;
    }
    else
    {
        cout << "Not a prime nunber: " << endl;
    }
}