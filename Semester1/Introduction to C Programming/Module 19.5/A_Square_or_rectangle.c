
#include<stdio.h>
#include<math.h>
int main()
{
    
    int t;
    scanf("%d", &t);
    int w, h;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &w, &h);
        if (sqrt(w) == sqrt(h))
        {
            printf("Square\n");
            
        }
        else
           printf("Rectangle\n");
        
    }
     
    return 0;
}


/* #include<stdio.h>
#include<math.h>
int main()
{
    
    int t;
    scanf("%d", &t);
    int w, h;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &w, &h);
        if (sqrt(w) == sqrt(h))
        {
            printf("Square\n");
            
        }
        else
           printf("Rectangle\n");
        
    }
     
    return 0;
} */