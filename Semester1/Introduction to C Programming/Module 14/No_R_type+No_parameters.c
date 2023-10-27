#include<stdio.h>
void sum()
{   //sum(void) dila, main a function call a kono parameter dita parbo na, compiler error diba.
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
  //  return;   // printf read na korai return hoi jaito
    printf("sum = %d\n", sum);
}
int main()
{
    
     sum();  // sum(7)
    return 0;
}