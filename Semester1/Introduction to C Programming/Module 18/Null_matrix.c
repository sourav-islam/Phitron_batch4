#include<stdio.h>
int main()
{
    
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    // input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d ", &ar[i][j]);
        }
        
    }
   // print
   int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ar[i][j] != 0 )
            {
                flag = 0;
            }
            
        }
        
    }
  if (flag)
  {
    printf("Null Matrix");
  }
  else 
    printf("Not Null");
  
    return 0;
}