
int char_to_ascii(char c)
{
     //int s = c;
    return c;
} 

#include<stdio.h>
int main()
{
    
    char ch ;
    scanf("%c", &ch); 
    int var = char_to_ascii(ch);
    printf("%d", var);
    return 0;
}