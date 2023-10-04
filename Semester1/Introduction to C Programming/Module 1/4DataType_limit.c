#include<stdio.h>
int main()
{
    unsigned int a;
    a = 4294967295; //range unsigned int(non-negative)  0 to 4,294,967,295 (2^32 - 1)
    printf("%u\n", a); // if a = 4294967296 then overflow

    int b = 2147483647; //range signed int  -2,147,483,648 (-2^31) to 2,147,483,647 (2^31 - 1)
    printf("%d\n", b); // if a = 2147483648 then overflow
}