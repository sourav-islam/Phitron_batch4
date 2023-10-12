#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned int n;
    scanf("%u", &n);
    
    if(n%3 == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}