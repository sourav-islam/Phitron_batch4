#include<stdio.h>
#include<math.h>
int main()
{
    
   int a, c;
   double b,d;

    scanf("%d %lf %d %lf", &a, &b, &c, &d); 
 
 //(pow(a,b) > pow(c,d))    cant use pow because a^b greater long long type
 
  // a^b = e^(b * ln(a)) =  exp(b * log(a));  // 

      double p1 =exp(b * log(a));
      double p2 =exp(d * log(c));
   //printf("%.0lf %.0lf\n", p1, p2);   
    if (p1 <= p2) 
    {
       printf("NO");
    }
    else
         {
            printf("YES");
         }
      
    
 
   

    return 0;
}