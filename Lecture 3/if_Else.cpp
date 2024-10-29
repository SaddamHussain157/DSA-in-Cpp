#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "Yoou can vote: " << endl;
    }
    if (age >= 45)
    {
        cout << "you can stand for voting: ";
    }
    else
    {
        cout << "You can not make any thing: ";
    }
    // Error if second if false then the else statment will also b executed
}