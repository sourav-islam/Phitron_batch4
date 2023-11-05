#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &ar[i][j]);
        }
    }
    int flag = 1;
    if (n != m)
    {
        flag = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == m - 1)
            {
                if (ar[i][j] != 1 && ar[i][j] != 1)
                {
                    flag = 0;
                    
                }
            }
            else
              {
                if(ar[i][j] != 0)
                  flag = 0;
              }
        }
    }
   if (flag)
   {
    printf("YES\n");
   }
   else
   printf("NO\n");
   

    return 0;
}