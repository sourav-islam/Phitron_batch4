#include <stdio.h>
int main()
{

    int x = 10;
    int *ptr = &x;
    
        printf("x er address: %p\n", &x);
        printf("*ptr er value: %p\n", ptr);
        printf("*ptr er address: %p\n", &ptr);
        printf("*ptr er memory size: %d\n", sizeof(ptr));
   

    /*
       *ptr = 20;
       printf("x : %d", x);
    */

    /* double y = 12;
    double *p = &y;
    printf("*p er memory size: %d\n", sizeof(p));
     */
    return 0;
}