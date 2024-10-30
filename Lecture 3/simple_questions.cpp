#include<iostream>
using namespace std;
int main(){
    // Q1
    int num;
    // cout << "Enter a number: ";
    // cin >> num;
    if (num>=1)
    {
        cout << "Number is a postive";
    }
    else if (num<0)
    {
        cout << "Number is a negative";
    }
    else
    {
        cout << "number is a 0;";
    }
    // Q2
    int year;
    cout << "ENter the year: " << endl;
    cin >> year;
    if (year%4==0)
    {
        cout << "Leap Year: ";
    }
    else
    {
        cout << "Not a leap year: ";
    }
    
}