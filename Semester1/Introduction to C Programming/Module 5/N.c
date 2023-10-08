#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x); 
    if('a' <= x && x <= 'z')
       {
        x = x -32;
        printf("%c", x); 
       }  
    else
       {
        printf("%c", x+32);
       }
}