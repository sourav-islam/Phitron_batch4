#include<stdio.h>
int main()
{
    unsigned int n;
    scanf("%u", &n);
     if(n == 1)
      printf("-1\n");
    for( unsigned int i = 2 ; i <= n; i+=2)
    {
        printf("%u\n", i);
    }
    return 0;
}