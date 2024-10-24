#include <iostream>
using namespace std;
int passvaluefunct(int a, int b)
{
    return (a + b);
}
void increment(int num)
{
    num++;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int sumofdigit(int num)
{
    int digitSum = 0;
    while (num > 0)

    {
        int lastDigit = num % 10;
        num /= 10;
        digitSum += lastDigit;
    }
    return digitSum;
}
int main()

{
    cout << "Sum: " << sumofdigit(2356) << endl;
    //     int number = 10;
    // increment(number); // Pass by value
    // cout << "After increment: " << number << endl;
    // return 0;

    //     int x = 5, y = 4; // Here is the values which will be pass
    //     cout << passvaluefunct(x, y) << endl;

    // int x = 10, y = 20;
    // cout << "Before swap: x = " << x << ", y = " << y << endl;
    // swap(x, y); // Pass by value
    // cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}
