#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    for (int i = 0, j = strlen(s) - 1; i < strlen(s), i < j; i++, j--)
    {

        if (s[i] != s[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{

    char s[10001];
    scanf("%s", s);
    int var = is_palindrome(s);

    if (var == 1)
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");

    return 0;
}