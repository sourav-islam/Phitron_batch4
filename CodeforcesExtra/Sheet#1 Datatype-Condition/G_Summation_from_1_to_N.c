#include<stdio.h>
int main()
{
    
   /*  long long n;
    scanf("%lld", &n);
    long long sum = 0, i = 1;
    while (i <= n) 
    {
        sum+= i;
        i++;
    }
    printf("%lld", sum);
     
    return 0; */

/* The time limit exceeded (TLE) issue might be due to the large value of N, which is 167959139 in your case. Your code uses a straightforward loop to calculate the sum of numbers from 1 to N, and for such a large N, it may take a long time to complete.

You can optimize the code to calculate the sum more efficiently. One way to do this is to use the arithmetic sum formula, which is (N * (N + 1)) / 2. This formula allows you to calculate the sum of numbers from 1 to N in constant time, regardless of the value of N */

  long long n;
  scanf("%lld", &n);
  long long sum = (n * (n + 1)/2);
  printf("%lld", sum);


}