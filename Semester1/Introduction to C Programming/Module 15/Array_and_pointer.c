#include<stdio.h>
int main()
{
    
    int arr[5] = {10,20,30,40,50};

    printf("0th index address - %p\n", &arr[0]); 
    printf("0th index address - %p\n", arr); 


    printf("0th index value - %d\n", arr[0]); 
    printf("0th index value - %d\n", *arr); 
// dereference of arr dia address of arr[0] pai, so arr asole pointer
    // arr[1] -> *(arr+1)
    // arr[2] -> *(arr+2)  
    // *(1+arr)-> 1[arr] / arr[1]  

    printf("1th index value - %d\n", *(arr+1)); 
    printf("1th index value - %d\n", *(1+arr)); 
    printf("1th index value - %d\n", arr[1]); 
    printf("1th index value - %d\n", 1[arr]); 
    return 0;

}