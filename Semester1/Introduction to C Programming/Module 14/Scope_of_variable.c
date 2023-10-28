// case 1: one's block variable can't access others;
/* 
#include<stdio.h>
int scope()
{   int x = 10;
    printf("a = %d\n", a); 
}
int main()
{
    
    int a = 10;
    scope();
    printf("%d", x);
    return 0;
} */

// case 2: same variables of different blocks, their addresses also different.

#include <stdio.h>

void scope(void)
{
    int s = 100;
     printf("address of s in scope() fuc.: %p\n", &s);
}

int main()
{
    int s = 100;
    printf("address of s in main() fuc.: %p\n", &s);
    scope();
    return 0;
}