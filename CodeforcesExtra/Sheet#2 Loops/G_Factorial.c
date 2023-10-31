#include<stdio.h>
int main()
{
    
    int t;
    scanf("%d\n", &t);
    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d\n", &n);
        if (n == 0)
        {
            printf("1\n");
            continue;
        }
        
      long long fact = 1;
    for (int i = 1; i <= n; i++)
    { 
         fact*=i;
    }
    printf("%lld\n", fact);
    }
    

}