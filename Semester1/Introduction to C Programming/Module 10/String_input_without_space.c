#include<stdio.h>
int main()
{
    // cannot read space

    char a[5];
    scanf("%s", a);  //i/p = Rahataaa
    printf("%s\n", a); //o/p = Rahataaa 
    // its segmentation fault cause size 5 but want to access more but windows provide extra memory(so print all)

    return 0;
}