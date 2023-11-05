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
    
    int r = n-1;
    int c = m-1;
    for (int j = 0; j < m; j++)
    {
        printf("%d ", ar[r][j]);
    }
    printf("\n");

     for (int j = 0; j < n; j++)
    {
        printf("%d ", ar[j][c]);
    }
}