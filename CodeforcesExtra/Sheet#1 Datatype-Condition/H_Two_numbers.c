#include<stdio.h>
#include<math.h>
int main()
{
    
    int a, b;
    scanf("%d %d", &a, &b);
    double x = a*1.0/b;  // here a , b int so a/b also int.
    int f = floor(x); 
    int c = ceil(x);
    int r = round(x);
    printf("floor %d / %d = %d\n", a , b, f);
    printf("ceil %d / %d = %d\n", a , b, c);
    printf("round %d / %d = %d", a , b, r);
    return 0;
}