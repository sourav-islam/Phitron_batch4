  char small_to_capital(char c)
  {
      char cap = c - 32;
      return cap;
  }

#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    char var = small_to_capital(ch);
    printf("%c", var);
     
    return 0;
}