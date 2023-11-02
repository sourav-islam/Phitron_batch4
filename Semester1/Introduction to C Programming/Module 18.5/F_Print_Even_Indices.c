#include<stdio.h>

void printEven( int a[], int n, int i)
{
    if ( i >= n) return;
    
    printEven(a, n, i+2);
      
       printf("%d ", a[i]);
    
}
int main()
{
    
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printEven(a , n, 0); 
    return 0;
}