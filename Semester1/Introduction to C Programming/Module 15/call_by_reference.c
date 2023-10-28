#include<stdio.h>

void fun( int *ptr)
{
    printf("ptr er address: %p\n", ptr);
    *ptr = 100;
}

int main()
{
    
     int x = 10;
     printf("x er address: %p\n", &x);
     fun(&x);
     printf("x er value: %d\n", x);
    return 0;
}