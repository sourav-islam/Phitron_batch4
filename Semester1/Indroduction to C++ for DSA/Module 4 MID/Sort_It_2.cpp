#include<bits/stdc++.h>
using namespace std;

/* int* sort_it(int n, int *a)
{
   for (int i = 0; i < n; i++)
   {
    cin >> a[i];
   }
   sort(a, a+n, greater<int>());
   return a;
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
  int* p =  sort_it(n, ar);
  for (int i = 0; i < n; i++)
   {
    cout << p[i] << " ";
   }
    return 0;
} */

int* sort_it(int n)
{
    int* ptr = new int[n];
   for (int i = 0; i < n; i++)
   {
    cin >> ptr[i];
   }
   sort(ptr, ptr+n, greater<int>());
   return ptr;
}
int main()
{
    int n;
    cin >> n;
  int* p =  sort_it(n);
  for (int i = 0; i < n; i++)
   {
    cout << p[i] << " ";
   }
    return 0;
}