#include<stdio.h>
#include<string.h>
int main()
{
    
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d ", &n);
        char s[n];
        scanf("%s", s);
        int ctn[2];
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == 'T')
            {
                ctn[0]++;
            }
            else
                ctn[1]++;
        }
        
        if (ctn[0] > ctn[1])
        {
            printf("Tiger");
        }
        else if (ctn[0] < ctn[1])
        {
            printf("Pathaan");
        }
        else
           printf("Draw");
        
        printf("\n");
        ctn[0] = 0;
        ctn[1] = 0;
    }
     
    return 0;
}