#include <stdio.h>
int main()
{

    unsigned n;
    scanf("%u", &n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            A[i] = 1;
        }

        else if (A[i] < 0)
        {
            A[i] = 2;
        }

        else
            A[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}