#include <iostream>
using namespace std;
void myFunction()
{
    int sum = 0, lastDigit, n = 1235;
    while (n > 0)
    {
        lastDigit = n % 10;
        if (lastDigit % 2 != 0)
        {
            sum += lastDigit;
        }
        cout << sum;
    }
}
int main()

{

    // int num = 10829, sum = 0, lastDigit;
    // while (num > 0)
    // {
    //     lastDigit = num % 10;
    //     sum += lastDigit;
    //     num = num / 10;
    // }
    // cout << sum << endl;
    // int n = 12345, lastDigit2, sum2 = 0;
    // while (n > 0)
    // {
    //     lastDigit2 = n % 10;
    //     n = n / 10;
    //     sum2 += lastDigit2;
    // }
    // cout << "153=> " << sum2;
    // Q1 Odd sum
    int LAStDigit, sum3 = 0, n2 = 153;
    while (n2 > 0)
    {
        LAStDigit = n2 % 10;
        if (LAStDigit % 2 != 0)
        {
            sum3 += LAStDigit;
        }
        n2 = n2 / 10;
    }
    // cout << endl
    //  << "sum3=> " << sum3;
    //  Q3 print reverse order
    int n = 12345, lastDigit2, sum2 = 0;
    while (n > 0)
    {
        lastDigit2 = n % 10;
        // sum2 += lastDigit2;
        // cout << lastDigit2<<" ";
        n = n / 10;
    }
    // Q4
    int n5 = 10829, result = 0;
    while (n5 > 0)
    {
        int LAStDigit4 = n5 % 10;
        result = result * 10 + LAStDigit4;
        n5 = n5 / 10;
    }
    cout << "Reverse Order: " << result;
}