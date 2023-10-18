#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);

    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index,value;
    scanf("%d %d", &index, &value);

    for (int i = n+1 ; i > index; i--)
    {
       arr[i] = arr[i-1];
    }

    arr[index] = value;
    //printf("%d", arr[index]);
    

    //printArray
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ", arr[i]);
    }
    
     
    return 0;
}