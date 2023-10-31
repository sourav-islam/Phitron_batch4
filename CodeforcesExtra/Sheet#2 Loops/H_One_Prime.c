#include<stdio.h>
#include<math.h>
int main()
{
    
    int x;
    scanf("%d", &x);

    // if ( x == 1)
    // {
    //     printf("NO");
    // }
    
    double d = sqrt(x);
    int f = floor(d);
    int flag = 0;
    for (int i = 2; i <= f; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
          
    }

    if (flag)
    {
        printf("NO");
    }
    else
        printf("YES");
    
    
    return 0;
}