// ceil(),floor(),round() double value thake integer value dai.

#include<stdio.h>
#include <math.h>
int main()
{
    
    double x; // 3.0, 3.00001, 3.49999,3.5, 3.99999
    scanf("%lf",&x); 
    int c = ceil(x);
    int f = floor(x);
    int r = round(x);
    printf("ceil value: %d\n",c);
    printf("floor value: %d\n",f);
    printf("round value: %d\n",r);
    //printf("round value: %d\n",round(x)); // ai vabe print korle round(x) er value 0 ase.variable a nite hobe.
    
   
/* 
   int x;
   scanf("%d",&x);
   double ans = sqrt(x);  // sqrt double nite hobe
   printf("%.2lf\n",ans);
    */

  /*  double a,b;
   scanf("%lf %lf", &a, &b);
   double ans = pow(a,b);
   printf("%lf\n",ans);
 */

/* int p;
scanf("%d",&p);
int ans = abs(p);
printf("%d\n",ans);
 */
    return 0;
}