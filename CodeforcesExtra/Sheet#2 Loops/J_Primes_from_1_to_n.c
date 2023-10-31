#include <stdio.h>
#include <math.h>
int main()
{

    int n;
    scanf("%d", &n);

   // printf("2 3 ");
    for (int i = 2; i <= n; i++)
    {
        double d = sqrt(i);
        int f = floor(d);
        int is_prime = 1; // Assume i is prime

        for (int k = 2; k <= f; k++)
        {
            if (i % k == 0)
            {
                is_prime = 0; // i is not prime
                break;
            }
        }

        if (is_prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}