#include<stdio.h>
#include<limits.h>
int main()
{
    
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }

    int min = INT_MAX; 

    for (int i = 1; i <= n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        if (min == A[i])
        {
            printf("%d %d", min, i);
            break;
        }
        
    }
    
    return 0;
}