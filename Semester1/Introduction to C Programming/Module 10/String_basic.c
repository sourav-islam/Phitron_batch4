#include<stdio.h>
int main()
{
   //section 1 
   //char a[5] ={'a', 'b', 'c', 'd', 'e'} ;
   /* char a[5] = "abcde";  // Standard 
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", a[i]);
    } */

   // section 2
    char a[5] = "Rahat";
    printf("%s\n", a);  // o/p =Rahat��I  so, need 1 more size for null(\o)
   
    char b[6] = "Rahat"; 
    printf("%s\n", b); // o/p =Rahat 
   
    char c[6] = "Rahat\0";
    printf("%s\n", c); // o/p =Rahat
    
    // section 3  size of string

    char d[] = "Rahat\0";
    int sz = sizeof(d)/sizeof(char);
    printf("%d\n", sz); // 7  with \0. if d[100] then sz = 100
    

    return 0;
}