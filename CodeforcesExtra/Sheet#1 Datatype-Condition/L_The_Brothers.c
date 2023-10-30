#include<stdio.h>
#include<string.h>
int main()
{
    
     char F1[100], s1[100];
     scanf("%s %s", F1, s1);
     char F2[100], s2[100];
     scanf("%s %s", F2, s2);
     int flag = 1;
     for (int i = 0,j = 0; i < strlen(s1),j < strlen(s2); i++,j++)
     {
            if (s1[i] != s2[j])
            {
                flag = 0;
                break;
            }
 
        
     }
     
     if (flag == 0)
     {
        printf("NOT");
        
     }
     else
        printf("ARE Brothers");
     
    return 0;
}