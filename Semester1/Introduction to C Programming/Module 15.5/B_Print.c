#include<stdio.h>

void number( int n )
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
        {
            printf(" ");
        }
        
    }
    
}
int main()
{
    
    int N;
    scanf("%d", &N);
    number(N);
    return 0;
}