#include<stdio.h>

int length( char ch[], int i)
{
    if( ch[i] == '\0' ) return 0;
     int len = length(ch, i+1);
     return len+1;
}
int main()
{
    
    char ch[6] = "hello";
    int l = length(ch , 0); 
    printf("%d\n", l);
    return 0;
}