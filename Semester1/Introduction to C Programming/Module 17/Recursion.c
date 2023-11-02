#include<stdio.h>

void fun()
{ 
    // no base case in here so, function call infinity time and stop after crashing the program.
    printf("fun\n");
    fun();
}
int main()
{
    
    fun(); 
    return 0;
}