#include<stdio.h>
int main()
{
    
    double x;
    scanf("%lf", &x);
    if (0 <= x && x <= 25)
    {
        printf("Interval [0,25]");
    }
    else if (25 < x && x <= 50)
    {
        printf("Interval (25,50]");
    }
     else if (50 < x && x <= 75)
    {
        printf("Interval (50,75]");
    }
     else if (75 < x && x <= 100)
    {
        printf("Interval (75,100]");
    }
    else
        printf("Out of Intervals");

     
    return 0;
}