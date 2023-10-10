#include<stdio.h>
#include<limits.h>
int main()
{
    unsigned int n;
    scanf("%u", &n);
    int max = INT_MIN;
    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (max <= x)
        {
            max = x;
        }
        
    }
    printf("%d\n", max);
    
     
    return 0;
}