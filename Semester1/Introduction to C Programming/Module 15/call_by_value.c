#include<stdio.h>

void fun(int x)
{
     x = 30;
    printf(" fun x: %d er address: %p\n",x, &x);
}

int main()
{
    
    int x = 20;
    fun(x); 
    printf(" main x: %d er address: %p\n",x, &x);
    return 0;
}