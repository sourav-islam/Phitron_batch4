#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{

    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        // copy
        int b[n];
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }
        // sorting
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
       // printf("%s", b);
         int c[n];
         for (int k = 0; k < n; k++)
         {
           int ab = abs(a[k] - b[k]);
            c[k] = ab;
         }
         
         for (int i = 0; i < n; i++)
         {
            printf("%d ", c[i]);
         }
         printf("\n");
         
         
    }

    return 0;
}