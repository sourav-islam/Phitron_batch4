#include <stdio.h>
#include <stdbool.h>
int main()
{

    unsigned n;
    scanf("%u", &n);

    unsigned A[n];
    for (unsigned i = 0; i < n; i++)
    {
        scanf("%u", &A[i]);
    }

    unsigned x;
    scanf("%u", &x);

    bool flag = 0;

    unsigned i = 0;

    while (i < n)
    {
        if (A[i] == x)
        {   
            flag = 1;
            break;
        }
        i++;
    }
    
    if (flag == 1)
    {
        printf("%u", i);
    }
    else
        printf("-1");
    

    return 0;
}