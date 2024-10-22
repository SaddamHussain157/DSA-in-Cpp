#include <iostream>
using namespace std;
int printvalue()
{
    cout << "Hello the beauty world!";
    return 5;
}
int main()
{
    int value = printvalue();
    cout << endl
         << "Value: " << value;
}