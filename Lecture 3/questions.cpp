#include <iostream>
using namespace std;
int main()
{
    // Q1 sum of number from 1 to n
    // int temp = 0;
    // int n;
    // cin >> n;
    // for (int i = 1; i < n; i++)
    // {
    //     temp += i;
    // }
    // cout << "The sum of the 1 to n is: " << temp;
    // Q2 sum of the odd numbers from 1 to n
    int sum = 0;
    // int n = 10;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0) // i%2 == 1
    //     {
    //         sum += i;
    //     }
    // }
    // cout << "sum of odd number from i to n: " << sum;
    // same question in while loop
    // int i = 1;
    // while (i <= n)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum += i;
    //     }
    //     i++;
    // }
    // cout << "the while loop to print the odd number from 1 to n: " << sum;
    // opposite question print the even number from 1 to n in while loop
    // int i = 1;
    // while (i <= n)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum += i;
    //     }
    //     i++;
    // }
    // cout << "the sum of the even numbers from 1 to n: " << sum;
    // int n;
    // bool isPrime = true;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 2; i <= n - 1; i++)
    // {
    //     if (n % i == 0)
    //     {

    //         isPrime = false;
    //         break;
    //     }

    // }
    // if (isPrime == true)
    // {
    //     cout << "Prime Number:";
    // }else
    // {
    //     cout << "Not a prime number: ";
    // }

    // int n = 7;
    // int count = 0;
    // for (int i = 0; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count += i;
    //     }
    //     if (count == 1)
    //     {
    //         cout << "prime number: ";
    //     }
    //     else
    //     {
    //         cout << "not a prime number";
    //     }
    // }

    int n, i;
    cout << "Enter a Value: ";
    cin >> n;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (n == i)
    {
        cout << "Prime Number!";
    }
    else
    {
        cout << "Not a prime number!";
    }

    return 0;
}
