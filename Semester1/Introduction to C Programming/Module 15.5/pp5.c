#include <stdio.h>

void swap_it(int *p, int *q)
{

    int temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{

    int num1, num2;
    scanf("%d %d", &num1, &num2);
    swap_it(&num1, &num2);

    printf("%d %d", num1, num2);
    
    return 0;
}