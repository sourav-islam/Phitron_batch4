#include<stdio.h>
#include<math.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
        
    }
       int p = 0, q = 0;
     for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        { 
            if (i == j)
            {
               p = p + a[i][j];    
            } 

            if( i+ j == n -1)
            {
              q = q + a[i][j]; 
            }
        }
        
    }
   
    int ans = abs(p - q);
     printf("%d", ans);
    return 0;
}