#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);

    int v;
    int p_sum = 0, n_sum = 0; 
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &v);
        if (v > 0)
        {
            p_sum = p_sum + v;
        }
        else
           {
            n_sum = n_sum + v;
           }
    }

    printf("%d %d", p_sum, n_sum);
     
    return 0;
}