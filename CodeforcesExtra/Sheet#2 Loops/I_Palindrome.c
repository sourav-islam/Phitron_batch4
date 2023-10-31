#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int num = n;
     int ans = 0;
    for (int i = 0; n != 0; i++)
    {
        int digit = n % 10;
        ans = (ans * 10) + digit;
        n /= 10;
    }
     printf("%d\n", ans);
     if(ans == num)
     {
        printf("YES");
     }
     else
        printf("NO");
    return 0;
}