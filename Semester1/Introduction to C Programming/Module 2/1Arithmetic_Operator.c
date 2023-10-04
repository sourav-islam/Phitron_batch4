#include<stdio.h>
int main()
{
    int a = 5, b = 2;
    // int add,sub,mult,div,mod;
     
     printf(" Addition(a+b) : %d\n", a+b);
     printf(" Subtraction(a-b) : %d\n", a-b);
     printf(" Multiplication(a*b) : %d\n", a*b);
     printf(" Division(a+b) : %d\n", a/b); // output:2 cause int type. (a*1.0)/2
     printf(" Reminder(a%%b) : %d\n", a%b);

     printf(" Floating point : ");
     float div = (a*1.0)/b;
     printf("%0.2f", div);
    
    
}