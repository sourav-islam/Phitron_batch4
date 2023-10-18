#include<stdio.h>
#include<limits.h>
int main()
{
    
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int maxIndex,minIndex;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
             minIndex = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
        
    }
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    // printArray
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

    
     
    return 0;
}