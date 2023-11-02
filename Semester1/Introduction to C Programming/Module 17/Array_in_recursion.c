#include<stdio.h>

void printArray( int ar[], int n, int i)
{
    if( i == n ) return; // base case
    printf("%d\n", ar[i]);
    printArray(ar, n, i+1);
}
int main()
{
    
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
     
     printArray(ar, n, 0);
    return 0;
}