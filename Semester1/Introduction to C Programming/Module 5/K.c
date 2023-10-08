#include<stdio.h>
int main()
{
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);

/*    if( a>=b && a>=c)
     {
        if(b>=c)
          {
            printf("%d ", c);
            printf("%d", a);
          }
     }
    else if(b>=a && b>=c)
    {
        if(a>=c)
        {
            printf("%d ", c);
            printf("%d", b);
        }
        else
          {
            printf("%d ", a);
            printf("%d", b);
          }
    } 
    else 
       {
        if(c>=a && c>=b)
           {
            if(a>=b)
            {
                printf("%d ", b);
                printf("%d", c);
            }
            else
            {
                printf("%d ", a);
                printf("%d", c);
            }
           }
       }
        */

    //    minimum
    if(a<=b && a<= c)
        printf("%d ", a);
    else if( b<=a && b<= c)
        printf("%d ", b);
    else
        printf("%d ", c);   
        // maximum  

    if(a>=b && a>= c)
        printf("%d", a);
    else if( b>=a && b>= c)
        printf("%d", b);
    else
        printf("%d", c);      
}