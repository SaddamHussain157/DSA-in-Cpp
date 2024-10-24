#include<iostream>
using namespace std;
int calculate_sum_of_digits(int num){
    int sum = 0;
    while (num>0)
    {
        sum += num % 10;
        num = num / sum;
    }
    return sum;
}
int main(){
    cout << "sum of the digits are: " << calculate_sum_of_digits(123);
}