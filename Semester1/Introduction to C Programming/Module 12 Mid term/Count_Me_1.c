#include<stdio.h>
int main()
{
    
    unsigned n; 
    scanf("%u", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d ", &arr[i]);
    }
 int two = 0, three = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            two++;
        }
        if (arr[i] % 3 == 0)
        {
            if (arr[i] % 2 != 0)
            {
                three++;
            }
            
        }
    }
    printf("%d %d\n", two, three);
    
    
    return 0;
}