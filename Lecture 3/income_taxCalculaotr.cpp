#include <iostream>
using namespace std;
int main()
{
    int income;
    float tax;
    cout << "Enter the income (In Lakhs): " << endl;
    cin >> income;
    if (income <= 5)
    {
        tax = 0;
        // cout << "No Tax: 0%" << endl;
    }
    else if (income <= 10)
    {
        tax = 0.2 * income;

        // cout << "10% TAx: " << endl;
    }
    else if (income > 10)
    {
        tax = 0.3 * income;
        // cout << "30% tax:" << endl;
    }
    cout << "Tax: " << (tax * 100000) << endl;
}