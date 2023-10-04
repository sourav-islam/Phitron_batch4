#include<stdio.h>
int main()
{
    int var; // variable declaration
    var = 4; // initialization
    char c = 'a'; // declaration and initialization in one line
    printf("%d  %c\n", var, c); // %d or %c formate specifier

    // print 100% 
    int a = 100;
    printf("%d%", a);
    printf("\n%d%%", a);
    printf("\n %d\\", var);

    // float and double
    float f = 3.2934734754;
    printf("\n%f", f);
    printf("\n%0.3f", f);
    double d = 4.45874540407644;
    printf("\n%lf", d);

  // boolean type
     _Bool bl = 1;
     printf("\nBoolean value:%d", bl);
    
 

}