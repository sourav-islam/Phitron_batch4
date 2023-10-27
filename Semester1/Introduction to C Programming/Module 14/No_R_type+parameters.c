#include<stdio.h>

void sum( int x, int y )
{
    int s = x + y;
    printf("Sum of x and y:%d ", s);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
     
    return 0;
}