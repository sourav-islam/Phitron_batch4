#include<stdio.h>
int main()
{
    
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];

    // input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d ", &a[i][j]);
        }
        
    }

    // print
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
         printf("\n");
    }
   
     
    return 0;
}