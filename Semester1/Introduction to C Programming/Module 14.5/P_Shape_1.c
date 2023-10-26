#include <stdio.h>
int main()
{

    unsigned n;
    scanf("%u", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }

        if (i < n)
        {
            printf("\n");
        }
    }

    return 0;
}