#include<stdio.h>
#include<string.h>
void fun(char ch[]) // not need size
{
    printf("%d", strlen(ch));
}
int main()
{
    
    char ch[] = "hello";
    fun(ch); 
    return 0;
}