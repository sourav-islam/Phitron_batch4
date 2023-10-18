#include<stdio.h>
#include<string.h>
int main()
{
    // length of string
    char a[100] = "Programming"; // size = 100;
    
    // using loop
    int i = 0, count = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d\n", count); 

    // using strlen() function
    int sz = strlen(a);
    printf("%d", sz);

    return 0;
}