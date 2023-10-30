#include<stdio.h>
int main()
{
    
    double num;
    scanf("%lf", &num);
    if (num == (int)num)
    {
        printf("int %d", (int)num);
    }
    else
     {
        int int_part = (int)num;
         double float_part = num - int_part;
        printf("float %d %.3f", int_part, float_part); // cant't  use %.3lf
     }
    return 0;
}