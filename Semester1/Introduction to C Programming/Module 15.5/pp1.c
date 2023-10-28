#include<stdio.h>
#include<stdlib.h>

int my_abs(int x)
{
    return abs(x);
}

int main()
{
    
    int n;
    scanf("%d", &n);
    int abs = my_abs(n); 
    printf("%d", abs);
    return 0;
}