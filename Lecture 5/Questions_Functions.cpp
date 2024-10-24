#include <iostream>
using namespace std;
int sum_of_N_numbers(int n)
// Q1 Sum of 1 to n numbers
{
    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        temp += i;
    }
    return temp;
}
// Q2 factorial of the number:
int factorailNum(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
// Q3: sum of the function of the value taken 4
int sumFunction(int a, int b, int c, int d)
{
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}
int sum_od_digit(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum += num % 10;
        num++;
    }
    return sum;
}
int main()
{
    cout << sum_od_digit(2356);
    // cout << "the sum function result is: " << sumFunction(5, 5, 5, 5);

    // cout << "Factorial of 1 to n is: " << factorailNum(22);
    // cout << "Sum of 1 to N Numbers are: " << sum_of_N_numbers(5);
}