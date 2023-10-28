#include<stdio.h>

void fun(int x)
{
     x = 30;
    printf(" fun x er address: %p\n", x);
}

int main()
{
    
    int x = 20;
    fun(x); 
    printf(" main x er address: %p\n", x);
    return 0;
}