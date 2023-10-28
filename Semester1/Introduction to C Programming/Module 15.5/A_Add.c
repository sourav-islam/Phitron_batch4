#include<stdio.h>

void summation( int a, int b)
{
    printf("%d", a+b);
}
int main()
{
    
    int x,y;
    scanf("%d %d", &x, &y);
    summation(x,y); 
    return 0;
}