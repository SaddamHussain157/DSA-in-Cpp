#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter the day (1 to 7): ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Its momday";
        break;
    case 2:
        cout << "Its thuesday";
        break;
    case 3:
        cout << "Its wednesday";
        break;
    case 4:
        cout << "Its thursday";
        break;
    case 5:
        cout << "Its friday";
        break;
    case 6:
        cout << "It saturday";
        break;
    case 7:
        cout << "It Sunday";
        break;

    default:
        cout << "Invalid entered";
        break;
    }
}