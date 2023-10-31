#include<stdio.h>
int main()
{
    
    int a, b, c,d; // 2<= a,b,c,d <= 10^9
    scanf("%d %d %d %d",&a,&b,&c,&d);
    // 10^9 * 10^9 * 10^9 * 10^9 = 10^36; so,
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    int mul = (a*b*c*d) % 100;

    if (mul <= 9)
    {
       printf("00");
    }
    else
    {
      printf("%d", mul); 
    }
    
    return 0;
}
