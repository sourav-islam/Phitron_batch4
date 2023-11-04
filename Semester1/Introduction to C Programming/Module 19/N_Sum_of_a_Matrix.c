/* #include<stdio.h>

void summation(int r, int c ,int a[r][c], int b[r][c], int d[r][c], int i, int j) 
{
          if (i == r) return;
          
          
            d[i][j] = a[i][j] + b[i][j];
          if (j + 1 == c)
          {
             summation(r, c, a, b, d, i+1, 0 );
          }
           else
              summation(r, c, a, b, d,i, j+1);
        
    
}
int main()
{
    
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int b[r][c];
    int d[r][c];
   // a matrix input
   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
        scanf("%d ", &a[i][j]);
    }
    
   }
   // b matrix output
   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
        scanf("%d ", &b[i][j]);
    }
    
   }
   // function call
    summation(r, c,a, b,d, 0,0);
  // PrintArray
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
        printf("%d ", d[i][j]);
    }
    if (i < r-1)
    {
       printf("\n");
    }
    
  }
  


    return 0;
}
 */
#include<stdio.h>
int main(){
  
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int b[r][c];
    int d[r][c];
   // a matrix input
   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
        scanf("%d ", &a[i][j]);
    }
    
   }
   // b matrix output
   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
        scanf("%d ", &b[i][j]);
    }
    
   }

   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
        d[i][j] = a[i][j] + b[i][j];
    }
    
   }

   // PrintArray
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
        printf("%d ", d[i][j]);
    }
    if (i < r-1)
    {
       printf("\n");
    }
    
  }
}


