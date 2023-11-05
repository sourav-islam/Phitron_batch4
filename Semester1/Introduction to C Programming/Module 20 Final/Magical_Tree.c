#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int t = 6;
    int ctn[22];
    for (int i = 1; i <= 21; i += 2)
    {
        ctn[i] = t++;
    }
    int s = ctn[n] - 1, k = 1;

    for (int i = 1; i <= ctn[n]; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        if (i <= ctn[n])
        {
            s--, k+=2;
        }
        printf("\n"); 
        
    }

     for (int i = 1; i <= 5; i++)
        {
            printf("     ");
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
            
        }

    return 0;
}