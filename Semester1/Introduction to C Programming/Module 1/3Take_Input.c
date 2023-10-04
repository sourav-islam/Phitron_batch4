#include<stdio.h>
int main()
{
    int a;
    char c;
    scanf("%d %c", &a, &c);
    printf("%d %c", a , c);

    // taking input 10% 20%
    int p, q;
    //method 1
    scanf("%d%c  %d%c", &p, &c, &q, &c);  // %c cause taking input character %
    printf("%d%% %d%%", p,q );

    //method 2
    scanf("%d%% %d%%", &p, &q);
    printf("%d%% %d%%", p, q);

}