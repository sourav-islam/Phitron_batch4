#include <stdio.h>
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
    // processing
    // 1st should be Square matrix(row = col)
    // 2nd check primary or secondary diagonal
    int flag = 1;
    if (row != col) // 1st
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i != j)  // secondary diagonal if (i+j != row -1)
            {                  
                if (a[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag)
    {

        printf("Primary diagonal Matrix");
        
    }
    else
        printf("Not primary diagonal");

    return 0;
}

