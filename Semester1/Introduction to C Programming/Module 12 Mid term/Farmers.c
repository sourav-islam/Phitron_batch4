#include<stdio.h>
int main()
{
    
    unsigned t;
    scanf("%u", &t);
    unsigned M1, M2, D; 

    for (int i = 0; i < t; i++)
    {
        scanf("%u %u %u", &M1, &M2, &D);
        int days = (M1*D) / (M1+M2);
        printf("%d\n", D-days);
    }
    
    return 0;
}