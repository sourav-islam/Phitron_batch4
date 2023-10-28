#include <stdio.h>
int my_len(char s)
{    int count = 0;
    for (int i = 1; i != '\0'; i++)
    {
        count++;
    }
  return count;  
}

int main()
{

    char str[100];
    scanf("%s", str);
    int l = my_len(str);
    printf("%d\n", l);
    return 0;
}