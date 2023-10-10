#include<stdio.h>
int main()
{
    
    unsigned n;
    scanf("%u", &n);

    int digit1 = n % 10;
    int digit2 = (n / 10);  

    if (digit1 % digit2 == 0)  // if digit2 = (n / 10) % 10;  runtime error cause digit2 = 0
    
    {
        printf("YES\n");
    }
    else if (digit2 % digit1 == 0)   
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    
      
     
     
    return 0;
}