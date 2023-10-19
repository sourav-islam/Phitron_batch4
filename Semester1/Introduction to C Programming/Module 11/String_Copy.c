#include<stdio.h>
#include<string.h>
int main()
{
    
    char a[100], b[100];
    scanf("%s %s", a, b);

   // iteration method

   /*  for (int i = 0; i < strlen(b); i++)  // strlen(b) cause b ta a ta copy
    {
        a[i] = b[i];
    }
     printf("%s\n", a); */

     strcpy(a, b);  // a = b;
     printf("%s %s\n", a, b);


    return 0;
}