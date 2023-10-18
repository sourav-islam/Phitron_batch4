#include<stdio.h>
int main()
{
    // initialization
    char Char[4] = {'a', 'b', 'c', 'd'};
    // accessing by index
    printf("Char[2]: %c\n", Char[2]); 
    // out of array size
    printf("Char[5]: %c\n", Char[5]);

 printf("initialize with zero:\n");

      int zero[] = {0};
      printf("zero[100]: %d\n", zero[100]);

       int a[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }


  printf("\ninitialize without zero:\n");  
   int arr2[5] = {4}; 
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\nGarbage value: %d ", arr2[6]);

    // Important Question
    // how to initialize entire array with specified elements accept zero.
  return 0;  
}