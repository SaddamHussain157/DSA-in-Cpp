#include <iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d)
{

    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > c && b > a && b > d)
    {
        return b;
    }
    else if (c > d && c > a && c > b)
    {
        return c;
    }
    else
    {
        return d;
    }
}
int main()
{

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
}