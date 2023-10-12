#include<stdio.h>
#include<math.h>
int main()
{
    
   double a, b, c, d;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d); 
    double pow1 = pow(a,b);
    double pow2 = pow(c,d);

    // printf("%lf", pow1);
    // printf("%lf", pow2);
    if (pow1 > pow2) 
    {
       printf("YES");
    }
    else
         {
            printf("NO");
         }
    
    // if (pow(a,b) > pow(c,d))
    // {
    //     printf("YES");
    // }
    // else if (pow(a,b) == pow(c,d))
    // {
    //     printf("NO");
    // }
    
    // else
    //    {
    //     printf("NO");
    //    } 
    
    return 0;
}