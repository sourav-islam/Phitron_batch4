#include<stdio.h>
#include<string.h>
int main()
{
    
    char a[100], b[100];
    scanf("%s %s\n", a, b);

   // iterative approach

   /*  int i = 0;
    while (1)
    {
        if((a[i]) == '\0' && b[i] == '\0') 
        {
            printf("Same\n");
            break;
        }
        
        else if (a[i] == '\0')
        {
            printf("a choto\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("b choto\n");
            break;
        }
        
        if (a[i] == b[i])
        {
          i++;
        }
        else if (a[i] < b[i])
        {
           printf("a choto\n");
           break;
        }
        else{
             printf("b choto\n");
             break;
        } 
    }*/
     
     int val = strcmp(a,b);

     if (val < 0)
     {
        printf("a choto\n");
        
     }
     else if (val > 0)
     {
        printf("b choto\n");
     }
     else
        printf("Same\n");
     
     
    return 0;
}