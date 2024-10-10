#include <iostream>
using namespace std;
int main()
{
    // Q1 sum of number from 1 to n
    int temp = 0;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        temp += i;
    }
    cout << "The sum of the 1 to n is: " << temp;
}