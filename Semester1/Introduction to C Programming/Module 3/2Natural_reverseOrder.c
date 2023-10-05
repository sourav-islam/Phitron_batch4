/* Write a C program to print all natural numbers in reverse (from n to 1). – using while loop */
#include <stdio.h>
int main()
{
     int n;
     printf("Take a number:");
     scanf("%d", &n);
  /*   for( int i = n; i > 0; i--) 
    {
        printf("%d\n", i);
    } */

    int i = n;
    while( i > 0)
    {
        printf("%d ", i); 
        i--;  
    }
    return 0;
}