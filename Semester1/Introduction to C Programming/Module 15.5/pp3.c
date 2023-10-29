#include<stdio.h>

int count_odd(int *ar, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if ( i[ar] % 2 != 0)
        {
           count++;
        }
        
    }
    return count;
    
}
int main()
{
    
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
     
     int odd = count_odd(ar,n);
     printf("%d\n", odd);
    return 0;
}