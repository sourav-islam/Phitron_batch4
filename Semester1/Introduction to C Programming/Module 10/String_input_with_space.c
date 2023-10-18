#include<stdio.h>
#include<string.h>
int main()
{
   // section 1
    /*  char b[18];  // windows a b[10] nilao sob characters print korbe.but its segmentation fault
     gets(b);
     printf("%s\n", b); */

    // section 2
    char a[18];
    fgets(a,18,stdin); // 18 ar kom nila, 10 nila 9 characters print korbe karon \0. r basi nila segmentation fault. size ar por 2 basi nila mane 19 nila enter pabe.
    printf("%s\n", a);
  
    return 0;
}