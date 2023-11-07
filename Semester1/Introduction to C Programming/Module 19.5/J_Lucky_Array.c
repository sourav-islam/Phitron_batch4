#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    // sorting ace to dec ,so 1st element will minimum
      for (int i = 0; i < n -1; i++)
   {
    for (int j = i+1; j < n; j++)
    {
        if (ar[i] > ar[j])
        {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
        
    }
    
   }
  int sum = 0;
for (int i = 0; i < n; i++)
{
    if (ar[i] == ar[0])
    {
        sum += 1;
    }
    
}


if (sum % 2 == 1)
{
    printf("Lucky");
}
else
    printf("Unlucky");

    
    return 0;
}