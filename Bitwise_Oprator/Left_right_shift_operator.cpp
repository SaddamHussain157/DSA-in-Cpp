#include <iostream>
using namespace std;
int leftShift_operator(int num1, int num2)
{
    return num1 << num2;
}
int rightShift_operator(int num1, int num2)
{
    return num1 >> num2;
}
int main()
{
    int a = 4, b = 2;
    cout << "leftShift_operator: " << leftShift_operator(a, b) << endl;
    cout << "rightShift_operator: " << rightShift_operator(a, b) << endl;
}