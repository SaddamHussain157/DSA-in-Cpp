#include <iostream>
using namespace std;

int main()
{
    int num = 10829, sum = 0, lastDigit;
    while (num > 0)
    {
        lastDigit = num % 10 == 0;
        sum += lastDigit;
        num = num / 10;
    }
    cout << sum;
}