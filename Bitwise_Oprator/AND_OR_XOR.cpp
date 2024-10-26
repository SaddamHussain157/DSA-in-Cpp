#include <iostream>
using namespace std;
int And_Bitwise_op(int a, int b)
{
    int result_and_operator = a & b;
    return result_and_operator;
}
int OR_Bitwise_op(int a, int b)
{
    int result_or_operator = a | b;
    return result_or_operator;
}
int XOR_Bitwise_operator(int a, int b)
{
    int resultof_XOR_operator = a ^ b;
    return resultof_XOR_operator;
}
int main()
{
    int xValue = 4, yValue = 8;
    cout << "Result of AND: " << And_Bitwise_op(xValue, yValue) << endl;
    cout << "Result of OR: " << OR_Bitwise_op(xValue, yValue) << endl;
    cout << "result of XOR: " << XOR_Bitwise_operator(xValue, yValue) << endl;
    // Lets take another example of it:
    int num1 = 3, num2 = 7;
    cout << "Another example of XOR: " << (num1 ^ num2) << endl;

    
}