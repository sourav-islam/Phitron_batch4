#include<stdio.h>
void fun(int *ar, int n)
{
    ar[n-1] = 100; // last index a 100 print
}
int main()
    {
        int ar[5] = {10,20,30,40,50,};
        fun(ar,5);
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", ar[i]);
        }
        
    }






/* void fun(char ch[]) // not need size
{
     ch[0] = 'G'; // address a change,So main ch o change hobe.
}
int main()
{
    
    char ch[] = "hello";
    fun(ch); 
    printf("%s\n", ch);
    return 0;
} */