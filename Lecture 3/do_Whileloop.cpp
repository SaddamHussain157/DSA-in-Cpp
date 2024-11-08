#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {
        // cout << i << " ";
        i++; // Remamber always put increment and decrement operator:
    } while (i <= 5);

    int n;
    do
    {
        cout << "Enter Number: " << endl;
        cin >> n;
        if (n % 10 == 0)
        {
            break;
        }
        cout << "Entered Number: " << n << endl;
    } while (true);
}