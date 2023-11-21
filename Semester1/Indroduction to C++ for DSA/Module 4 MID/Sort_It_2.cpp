#include<bits/stdc++.h>
using namespace std;
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