char capital_to_small(char c)
{
    char sml = c + 32;
    return sml;
}

#include<stdio.h>
int main(){

    char ch;
    scanf("%c",&ch);
    int sml = capital_to_small(ch);
    printf("%c",sml);
    return 0;
}