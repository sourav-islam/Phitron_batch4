#include<stdio.h>
#define PI 3.141592653
int main()
{
    double r;
    scanf("%lf", &r);
    printf("%.9f", PI*r*r); // %lf can't use.o/p: 0.000000000
    
    return 0;
}