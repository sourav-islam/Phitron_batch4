#include<stdio.h>
int main()
{
    
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    // process
    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] + arr[j] == x)
                {
                    flag = 1;
                    break;
                }
                
            }
            
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else 
        printf("NO\n");
    
    
    
     
    return 0;
}