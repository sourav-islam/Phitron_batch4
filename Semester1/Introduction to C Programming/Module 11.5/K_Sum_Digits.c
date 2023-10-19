#include<stdio.h>
#include<string.h>
int main()
{
    
    unsigned n;
    scanf("%u", &n);
   char s[n];
   scanf("%s", s);
   int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i]-48;
        sum += value;
    }
    printf("%d\n", sum);
    
     
    return 0;
}