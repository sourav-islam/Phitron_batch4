#include<stdio.h>
int main()
{
    
    int size ;
    scanf("%d", &size);

 // taking n numbers of input
     int arr[size]; // size as a variable ,can't initialize
    for (int i = 0; i < size; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // printing the array

     for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}