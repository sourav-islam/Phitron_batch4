#include<stdio.h>

void Rec(int n,int i)
{
    if(i == n+1) return;
    Rec(n,i+1);
    printf("I love Recursion\n");
}
int main()
{
    
    int n;
    scanf("%d", &n);
    Rec(n,1); 
    return 0;
}