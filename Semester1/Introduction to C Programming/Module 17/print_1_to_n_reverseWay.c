#include<stdio.h>

void fun( int n, int i){
    if (i == n+1) return; // base case

    fun( n, i+1);
    printf("%d\n", i);
}
int main()
{
    
    int n;
    scanf("%d", &n);
    fun( n , 1); 
    return 0;
}