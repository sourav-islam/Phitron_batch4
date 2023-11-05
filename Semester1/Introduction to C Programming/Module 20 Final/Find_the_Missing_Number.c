#include <stdio.h>
int main()
{

   int t;
   scanf("%d", &t);
   for (int i = 0; i < t; i++)
   {
      int a, b, c;
      long long m;
      scanf("%lld %d %d %d", &m, &a, &b, &c);
      long long ans = m / (a * b * c);
      if ( m % (a * b * c) == 0 )
      {
         printf("%lld\n", ans);
         
      }
      else
         printf("-1\n");
   }

   return 0;
}