#include<stdio.h>

int sum(int x, int y)
{
    int s = x+y;
    return s;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int var = sum(x, y);
    printf("%d\n", var);
     
    return 0;
}