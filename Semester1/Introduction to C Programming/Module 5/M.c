#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x); 
      
      if( '0'<= x && x<= '9' )
          printf("IS DIGIT"); 
      else 
      {
        if('a' <= x <= 'z')
       {
        printf("ALPHA\n"); 
        if('a' <= x && x<= 'z')
          printf("IS SMALL\n");
        else
        printf("IS CAPITAL\n");  
       }
      } 
       
     
       
    
}