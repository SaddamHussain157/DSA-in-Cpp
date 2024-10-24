// Syntax of the parametrized function

// returntype functionName(type1, type2){
// do some work!.
// }
// lets take an example
#include <iostream>
using namespace std;
int paraFunction(int a, int b)
{
    int sum = a + b;
    return sum;
}
int sum(int a, int b)
{
    int s = a + b;
    return s;
}
int minimum_of_two(int a, int b) // which we are giving the values that are parameters
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
double sumofDoubleV(double a, double b)
{
    return a + b;
}
int main()

{

    cout << "Sum of Decimal Values: " << sumofDoubleV(21.1, 12.44);
    //     cout << "the function returned Value: " << paraFunction(5, 5) << endl;
    //     cout << "sum function: " << sum(10, 5);
    // cout << "MiniMum of two Numbers" << "Whereas the minimun value is: " << minimum_of_two(2, 77); //The values which we are passing that are called: arguments.
}
