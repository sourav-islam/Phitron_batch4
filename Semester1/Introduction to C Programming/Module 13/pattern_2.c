//       *
//     * * *
//   * * * * *
// * * * * * * *

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

   /*  for (int i = 1; i <= n; i++)
    {
        // space printing
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }

        // 2nd traingle printing
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        // 3rd traingle printing

        if (i > 1)
        {
            for (int k = 1; k < i; k++)
            {
                printf("*");
            }
        }

        printf("\n");
    } */

     int s = n-1, k = 1;
  for (int i = 1; i <= n; i++)
  {
        for (int j = 1; j <= s; j++)
        {
             printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
    s--;
    k += 2;
    printf("\n"); 
        
  }
  
    return 0;
}