#include <iostream>
using namespace std;
int main()
{
    do
    {
        cout << "hello world " << endl;
    } while (3 > 10); // as the condition is wrong but it still run that is do while loop use for it. where in the case not in while loop, it not prints if the condition is wrong.
    while (3 > 10)
    {
        cout << "hello brother!";
    }
    //   as you can imagine in the termianl as the result is shown

    int n = 10;
    int i = 1;
    do
    {
        cout << " " << i;
        i++;
    } while (i <= n);

    return 0;
}