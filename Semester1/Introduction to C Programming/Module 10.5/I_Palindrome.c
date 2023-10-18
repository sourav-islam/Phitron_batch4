#include<stdio.h>
#include<string.h>
int main()
{
    
    char s[1001];
    scanf("%s", s);

  /*   char str[1001];
    for (int i = strlen(s) , j = 0; i >= 0 ,j <= strlen(str); i--, j++)
    {
        str[j] = s[i]; // two strings can't assign directly
    }
    printf("%s", str);

    if (str == s)  // two strings can't compare directly
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
     */
     int flag = 1;
    int i = 0, j = strlen(s)-1;   // "abba"  length 4. access korbo s[0,1,2,3]
    while (i < j)
    {
        if (s[i] != s[j])
        {
           flag = 0;
           break;
        }
        i++;
        j--;
    }
    if (flag == 1)
    {
       printf("YES\n");
    }
    else
    printf("NO\n");
    
    
     
    return 0;
}