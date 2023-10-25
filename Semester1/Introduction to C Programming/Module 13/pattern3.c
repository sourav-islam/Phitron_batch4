// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    // process 1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
    }

    // process 2
   /*  int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k++;
        
    } */
    
     
    return 0;
}