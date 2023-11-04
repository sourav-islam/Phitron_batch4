// square check row = col
// a[i][j] == a[0][0]
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
    // process
    int flag = 1;
    if (row != col) // 1st
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
              if (a[i][j] != 1)
              {
                flag = 0;
                break;
              }
            }
            else
            {
               if (a[i][j] != 0)
              {
                flag = 0;
                break;
              } 
            }
            
            
        }
    }

    if (flag)
    {

        printf("unit Matrix");
        
    }
    else
        printf("Not unit");

    return 0;
}

