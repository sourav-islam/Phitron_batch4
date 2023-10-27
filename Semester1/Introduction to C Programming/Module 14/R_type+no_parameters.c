#include<stdio.h>

int sum()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x+y;
    printf("sum: %d\n", sum);
}
int main()
{
    
     sum();
    return 0;
}