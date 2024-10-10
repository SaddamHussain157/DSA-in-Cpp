#include <iostream>
using namespace std;
int main()
{

  for (int i = 0; i < 5; i++)
  {
    cout << i << endl;
  }
  // While loop print numbers from 10 to 20
  int count = 10;
  // while (count <= 20)
  // {
  //   cout << count << endl;
  //   count++;
  // }
  // Using the user input of the loop 
  int n;
  cout << "Enter how many times a nuber print: ";
  cin >> n;
  while (count <= n)
  {
    cout << count;
    count++;
  }

  return 0;
}