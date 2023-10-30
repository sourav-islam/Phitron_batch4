#include<stdio.h>
int main()
{
    
    int int_v;
    long long l_v;
    char ch;
    float f;
    double d;

    scanf("%d %lld %c %f %lf", &int_v, &l_v, &ch, &f, &d);
    printf("%d\n%lld\n%c\n%0.2f\n%0.1f", int_v, l_v, ch, f, d);
    // here double d use %0.1lf is an error output show -0.0
    // soln:If you want to format and display a floating-point number without the negative sign in front of zero, you can use the %f format specifier  
    return 0;
}