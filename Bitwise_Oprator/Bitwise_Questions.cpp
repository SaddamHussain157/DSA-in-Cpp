#include <iostream>
using namespace std;
int And_Bitwise_opeartor(int a, int b)
{
    return a & b;
}
int OR_Bitwise_opeartor(int a, int b)
{
    return a | b;
}
int XOR_Bitwise_opeartor(int a, int b)
{
    return a ^ b;
}
int right_leftShift_operator(int a, int b)
{
    return a << b;
}
int right_leftShift_operator2(int a, int b)
{
    return a >> b;
}
int main()
{
    cout << "And_Bitwise_opeartor: " << And_Bitwise_opeartor(6, 10) << endl;
    cout << "OR_Bitwise_opeartor: " << OR_Bitwise_opeartor(6, 10) << endl;
    cout << "XOR_Bitwise_opeartor: " << XOR_Bitwise_opeartor(6, 10) << endl;
    cout << "right_leftShift_operator: " << right_leftShift_operator(10, 2) << endl;
    cout << "right_leftShift_operator2: " << right_leftShift_operator2(10, 1) << endl;
}