/* #include <stdio.h>
#include <string.h>

void palindrome(char s[], char c[], int i, int j)
{
    if (i == strlen(s))
    {
        return;
    }
    palindrome(s, c, i + 1, j - 1);

    c[j] = s[i];

    if (i == 0)
    {
        // printf("%s", c);
        if (strcmp(s, c) == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return;
}
int main()
{

    char s[1001], c[1001];
    scanf("%s", s);
    // fgets(s, 1001, stdin); // wrong
    palindrome(s, c, 0, strlen(s) - 1);

    return 0;
}
 */

/* #include<stdio.h>
#include<string.h>
int main()
{

    char a[1001], b[1001];
    scanf("%s", a);
    //string copy
    strcpy(b, a);

   int i = 0, j = strlen(b)-1;
   while (i < j)
   {
      int temp = b[i];
      b[i] = b[j];
      b[j] = temp;
      i++;
      j--;
   }
   //printf("%s\n", b);
   if (strcmp(a, b) == 0)
   {
    printf("YES");
   }
   else
    printf("NO");


    return 0;
} */

// method 2

#include <stdio.h>
#include <string.h>
int main()
{

    char a[1001];
    scanf("%s", a);

    int i = 0, j = strlen(a) - 1;
    int flag = 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if (flag)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}