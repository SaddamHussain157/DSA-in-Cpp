#include <iostream>
using namespace std;
int main()
{
  int num;
  // cout << "Enter the num value: ";
  // cin >> num;

  // cout << (num >= 0 ? "Number is Postive" : "Number is negative");
  // Q1
  bool isAdult;
  int age = 18;
  isAdult = age >= 18 ? true : false;
  cout << isAdult << endl;
  // Q2 Largest of 2 numbers
  int num1 = 7;
  int num2 = 5;
  int result = num1 > num2 ? num1 : num2;
  cout << "Largest number is: " << result << endl;
  // Q3 Even/Odd
  int number = 7;
  string Result2 = (number % 2 == 0) ? "Even" : "Odd";
  cout << "Even/Odd: " << Result2 << endl;

  return 0;
}