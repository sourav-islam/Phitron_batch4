#include <stdio.h>
#include <math.h>
void equation(int x, int n)
{
    long long s = pow(x, 0) - 1;
    for (int i = 2; i <= n; i += 2)
    {
        s = s + pow(x, i);
    }
    printf("%lld", s);
}
int main()
{

    int x, n;
    scanf("%d %d", &x, &n);
    equation(x, n);
    return 0;
}