#include<stdio.h>
#include<string.h>
int main()
{
    
    char s[1000001];
    scanf("%s", s);

    int sum = 0;

    for (int i = 0; i < strlen(s); i++)
    {
       // sum = sum + s[i]; // error cause s[i] char and sum int
        sum = sum + (s[i]-'0'); // s[i] - 48
    
    }
    printf("%d", sum); 
 
    
    return 0;
}