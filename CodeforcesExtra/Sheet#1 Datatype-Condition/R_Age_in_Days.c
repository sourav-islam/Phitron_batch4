#include<stdio.h>
int main()
{
    
    unsigned n;
    scanf("%u", &n); 
    unsigned year = n/365;
    unsigned month = (n%365)/30;
    unsigned day = (n%365)%30;

    printf("%u years\n%u months\n%u days", year, month,day);
    return 0;
}