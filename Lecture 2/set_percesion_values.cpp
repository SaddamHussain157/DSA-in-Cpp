#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float float_Value = 21.1231;
    double double_value = 212.0983621;
    // cout << SetPrecision(3) << "floatValue" << float_Value << endl;
    cout  << setprecision(6) << "DoubleValue: " << double_value << endl
         << setprecision(4) << "floatVAlue: " << float_Value << endl;
    ;
    // cout << SetPrecision(2) << "floatVAlue: " << float_Value << endl;
}