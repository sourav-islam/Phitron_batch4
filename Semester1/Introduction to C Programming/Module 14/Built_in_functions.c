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
    return 0;
}