#include<stdio.h>
#include<string.h>
int main()
{
    
    char s[1001];
    char t[1001];
    scanf("%s %s", s, t); 
 
    int sz = strlen(s);
    int sz1 = strlen(t);
    printf("%d %d\n", sz, sz1);

    printf("%s %s\n", s, t);

    return 0;
}