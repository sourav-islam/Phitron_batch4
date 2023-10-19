#include<stdio.h>
#include<string.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int arr[n]; // numbers can 0-6 only
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
// Step 1
    /* int zero = 0, one = 0, two = 0, three = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;

        }
        if (arr[i] == 1)
        {
            one++;
        }
        if (arr[i] == 2)
        {
            two++;
        }
        if (arr[i] == 3)
        {
            three++;
        }
        
        
        
        
    }
    printf("0 - %d\n", zero);
    printf("1 - %d\n", one);
    printf("2 - %d\n", two);
    printf("3 - %d\n", three);
     */
// step 2
    // int zero = 0, one = 0, two = 0, three = 0;
   /*  int ctn[7] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            ctn[0]++;

        }
        if (arr[i] == 1)
        {
            ctn[1]++;
        }
        if (arr[i] == 2)
        {
            ctn[2]++;
        }
        if (arr[i] == 3)
        {
            ctn[3]++;
        }
        
 }
    printf("0 - %d\n",  ctn[0]);
    printf("1 - %d\n", ctn[1]);
    printf("2 - %d\n", ctn[2]);
    printf("3 - %d\n", ctn[3]);
    */
 // step 3

    int ctn[7] = {0};
    for (int i = 0; i < n; i++)
    {
        ctn[arr[i]]++;
    } 

    for (int i = 0; i < 7; i++)
    {
        printf("%d -%d\n",i, ctn[i]);
    }
        
    return 0;
}    