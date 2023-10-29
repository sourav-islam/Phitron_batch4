#include <stdio.h>

void odd_even(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}
int main()
{

    odd_even();

    return 0;
}