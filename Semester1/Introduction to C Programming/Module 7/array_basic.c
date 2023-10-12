/* Array is a list that store same type of elements 
occupies contiguous memory 
Access by indexing. */

#include<stdio.h>
int main()
{
    
// data type + variable[size]  
    int arr[5] ;
     
     arr[0] = 2;
     arr[1] = 4;
     arr[2] = 6;
     arr[3] = 8;
     arr[4] = 10;
    
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    printf("%d ", arr[4]);

// memory allocation if arr[0] = 101 then arr[3]= baseAddress + data_type_memory * index 
    return 0;
}