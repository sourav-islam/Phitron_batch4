#include<stdio.h>
int main()
{
    
    unsigned n;
    scanf("%u", &n); 

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // sorting
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j]) 
            {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
            
        }
        
    }
    // printArray
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}