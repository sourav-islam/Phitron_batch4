#include <stdio.h>
#include <string.h>

int c_vowel(char s[], int i)
{
    if (s[i] == '\0')
        return 0;
    int c = c_vowel(s, i + 1);

    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {

        return c + 1;
    }
    else
        return c;
}
int main()
{

    char s[200];
    fgets(s, 200, stdin);

    int ctn = c_vowel(s, 0);
    printf("%d\n", ctn);
    return 0;
}