#include<stdio.h>
#include<string.h>
int main()
{
    
    char s[1000001];
    gets(s); // fgets(s,1000001, stdin);
    for (int i = 0; i < strlen(s); i++)  // for( int i = 0; s[i] != '\\'; i++)
    {
        if (s[i] == '\\')
        {
           break;
        }
        printf("%c", s[i]);
        
    }
    
    return 0;
}