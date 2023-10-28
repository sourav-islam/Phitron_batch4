

/* Let's say you have three numbers: A, B, and C.

1.Compare A and B. If A is greater than B, swap their positions.

2.Compare B and C. If B is greater than C, swap their positions.

3.Compare A and B again, in case the initial comparison caused a swap. */

#include<stdio.h>
void sort( int x, int y, int z)
{
    if (x > y)
    {
        int temp = x;
         x = y; 
         y = temp;      
    }
    if (y > z)
    {
        int temp = y;
         y = z; 
         z = temp; 
    }
    if (x > y)
    {
        int temp = x;
         x = y; 
         y = temp; 
    }
    
 printf("%d\n%d\n%d\n", x, y, z);   
    
}
int main()
{
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    sort(a,b,c);
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}

/* 
#include <stdio.h>

void sortThreeNumbers(int *a, int *b, int *c) {
    int temp;
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sortThreeNumbers(&num1, &num2, &num3);

    printf("Numbers in ascending order: %d %d %d\n", num1, num2, num3);

    return 0;
}
 */