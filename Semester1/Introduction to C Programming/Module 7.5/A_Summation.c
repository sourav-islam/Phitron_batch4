#include<stdio.h>
#include<math.h>
int main()
{
    
    int n;
    scanf("%d", &n);
 
    int A[n];
   for (int i = 0; i < n; i++)
   {
     scanf("%d ", &A[i]);
   }
 
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (A[i]);
    }
    printf("%lld", llabs(sum)); // llabs is used to calculate the absolute value of a long long integer.
   
  //  if( sum < 0)
  //  {
  //      printf("%lli", sum*(-1));
  //  }
  //  else
  //    printf("%lli", sum);
    
   
 
    return 0;
}