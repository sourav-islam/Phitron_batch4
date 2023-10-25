// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int k = 4;
    for (int i = 1; i <= n; i++)
    {                  // j <= n-j+1
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k--;
        
    }
     
    return 0;
}