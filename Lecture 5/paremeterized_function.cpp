// Syntax of the parametrized function

// returntype functionName(type1, type2){
// do some work!.
// }
// lets take an example
#include <iostream>
using namespace std;
int paraFunction(int a, int b)
{
    return a + b;
}
int main()
{
    cout << "the function returned Value: " << paraFunction(5, 5) << endl;
}
