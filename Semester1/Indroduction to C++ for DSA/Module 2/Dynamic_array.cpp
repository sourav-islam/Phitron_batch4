#include<bits/stdc++.h>
using namespace std;

int* fun( int n){
 int *ar  = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    return ar;
}
int main()
{
    int t;
    cin >> t;
    int  *p = fun(t);
   for (int i = 0; i < t; i++)
   {
        cout << p[i] << " ";
   }
   
    return 0;
}