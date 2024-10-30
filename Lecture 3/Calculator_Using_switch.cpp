#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 8;
    char Character;
    cout << "Enter the character (+, -, /, *): ";
    cin >> Character;
    switch (Character)
    {
    case '+':
        cout << "The adition of a+b is: " << a + b << endl;
        break;
    case '*':
        cout << "The multiplication of a*b is: " << a * b << endl;
        break;
    case '/':
        cout << "The division of a%b is: " << a / b << endl;
        break;
    case '-':
        cout << "The subtraction of a-b is: " << a - b << endl;
        break;
    case '%':
        cout << "The modulus of a+b is: " << a % b << endl;
        break;

    default:
        cout << "Invalid character entered:";
        break;
    }
}