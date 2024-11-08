#include <iostream>
using namespace std;
int main()
{
    // int sum = 0, lastDigit, n = 123;
    // while (n > 0)
    // {
    //     lastDigit = n % 10;
    //     cout << lastDigit << " " << endl;

    //     if (lastDigit % 2 != 0)
    //     {
    //     sum += lastDigit;
    //     }
    //     n = n / 10;
    // }
    //     cout << sum;
    int n = 12345;
    int res = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n /= 10;
    }
    cout << "Reverse Order: " << res << endl;

    int n5 = 1235;
    int result = 0;
    while (n5 > 0)
    {
        int LAStDigit4 = n5 % 10;
        cout << LAStDigit4 << " ";
        result = result * 10 + LAStDigit4;
        n5 = n5 / 10;
    }
    cout << "Reverse Order: " << result;
}