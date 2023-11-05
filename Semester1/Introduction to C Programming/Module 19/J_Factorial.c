#include<stdio.h>

long long factorial( int n )
{
    if ( n == 0) return 1;
   
    // base case
    long long f = n * factorial( n-1 );
    return f;
}
int main()
{
    
    int n;
    scanf("%d", &n);
    long long fact = factorial(n); 
    printf("%lld", fact);
    return 0;
}