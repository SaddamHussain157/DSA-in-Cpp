#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "Enter the num value: ";
  cin >> num;

  cout << (num >= 0 ? "Number is Postive" : "Number is negative");
  
  return 0;
}