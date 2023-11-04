#include<stdio.h>

void digit(int n)
{
    if (n == 0)
    {
       // printf("\n");
        return;
    }
    int d = n % 10;
    n = n / 10;
    digit(n);
    printf("%d ", d);
     

}
int main()
{
    
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        digit(n);
        if (n == 0)
        {
            printf("0");
        }
        
        printf("\n");
    }
     
    return 0;
}