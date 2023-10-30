#include<stdio.h>
int main()
{
    
    long long x,y;
    scanf("%lld %lld",&x,&y);
    int digit1 = x % 10; 
    int digit2 = y % 10;
    int sum = digit1 + digit2;
    printf("%d",sum);
    return 0;
}