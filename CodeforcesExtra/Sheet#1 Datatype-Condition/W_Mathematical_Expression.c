#include<stdio.h>
int main()
{
    
    int a, b;
    long long c;
    char s, q;
    scanf("%d %c %d %c %lld ", &a, &s, &b, &q, &c);
    if (s == '+')
    {
        if(a + b == c)
        {
            printf("Yes");
        }
        else
            printf("%lld", a+b);
        
    }

     if (s == '-')
    {
        if(a - b == c)
        {
            printf("Yes");
        }
        else
            printf("%lld", a-b);
        
    }

     if (s == '*')
    {
        if(a * b == c)
        {
            printf("Yes");
        }
        else
            printf("%lld", a*b);
        
    }
    
    return 0;
}