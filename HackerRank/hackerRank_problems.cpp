#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main()
{
    // Declare variables
    int intvalue;
    long long longvar;
    char charvalue;
    float floatvalue;
    double longvalue;

    // Input values
    cin >> intvalue;
    cin >> longvar;
    cin >> charvalue;
    cin >> floatvalue;
    cin >> longvalue;

    // Output the values
    cout << intvalue << endl;
    cout << longvar << endl;
    cout << charvalue << endl;

    // For float (3 decimal places)
    cout << fixed << setprecision(3) << floatvalue << endl;

    // For double (9 decimal places)
    cout << fixed << setprecision(9) << longvalue << endl;

    return 0;
}
