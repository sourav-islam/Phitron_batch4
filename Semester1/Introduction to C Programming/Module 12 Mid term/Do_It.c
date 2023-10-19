#include<stdio.h>
int main()
{
    
    unsigned n, k;
    scanf("%u %u",&n,&k);

    for (int i = 0; i < n; i++) 
    {
        for (int i = 1; i <= k; i++)
        {
            printf("%d ", i);
        }
       printf("\n");   
    }
    


    return 0;
}