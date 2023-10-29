#include<stdio.h>

/* void fun( int ar[]) // arr[] point to integer. pointer var. takes 4 or 8 bytes.
{
    int sz = sizeof(ar)/sizeof(int);  // 32 bit system: 4/4 = 1
    printf(" Size in fun(): %d\n",sz); // 64  a: 8/4 = 2
}
int main()
{
    
    int ar[5] = { 10,20,30,40,50};
    int sz = sizeof(ar)/sizeof(int);
    printf(" Size in main(): %d\n",sz);
    fun(ar) ;

    return 0;
} */

void fun( int arr[] , int size) // fun( int *ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", i[arr]); // arr[i] = i[arr] = *(arr+i) = *(i+arr)
    }
    
}
int main()
{
    
    int ar[5] = { 10,20,30,40,50};
    fun(ar, 5) ;

    return 0;

}