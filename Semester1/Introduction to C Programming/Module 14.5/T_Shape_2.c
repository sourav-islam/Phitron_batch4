#include<stdio.h>
int main()
{
    
    unsigned n;
    scanf("%u", &n);
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
      if (i < n)
      {
        printf("\n");
      }
      
        
        
    }
     
    return 0;
}