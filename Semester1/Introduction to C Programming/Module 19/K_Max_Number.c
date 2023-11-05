#include<stdio.h>
#include<limits.h>

int Max_num( int *ar, int n, int i)
{
    if (i == n)
    {
       return INT_MIN;
    }
    
    int x = Max_num( ar , n, i+1);
    if (ar[i] > x)
    {
        return ar[i];
    }
    else
        return x;

    
    
}

int main()
{
    
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &ar[i]);
    }
    int max = Max_num(ar , n, 0);
    printf("%d", max);
    
     
    return 0;
}