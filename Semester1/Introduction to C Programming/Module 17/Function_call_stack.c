#include<stdio.h>

void world(void)
{
    printf("World\n");
}

void hello(void)
{
    printf("Hello Start\n");
    world();
    printf("Hello End\n");
}

int main()
{
    
    printf("Main Start\n");  //Stack a dhukbe = main() -> hello() -> world()
    hello();                 // Stack print korbe = world() -> hello() -> main()
    printf("Main End\n"); 
    return 0;
}