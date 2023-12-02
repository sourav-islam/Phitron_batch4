#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1 v= ba v.assign(v)
    /*    vector<int> v = {10, 20, 30};
       vector<int> v1 = {1, 2, 3};
       // v1 = v; // O(1) if v and v1 same size, defferent size O(N)
       //  v1.assign(v); //error v1.assign({10,20,30}) or v.assign(7, 100); or v.assign(arr, arr + size) or
       v1.assign({10, 20, 30});
       for (int i = 0; i < v1.size(); i++)
       {
           cout << v1[i] << " ";
       }
       cout << endl;
       v1.pop_back();
       v1.pop_back();
       for (int x : v1)
           cout << x << " ";
    */
    // 2 Insert (pointer address)   //O(N+K)
    /*   vector<int> v = {1, 2, 3, 4, 5};
      v.insert(v.begin() + 2, 40);
      for (int a : v)
          cout << a << " ";
      cout << endl;
      vector<int> v1 = {100, 200, 300};
      v.insert(v.begin() + 3, v1.begin(), v1.end());
      for (int b : v)
          cout << b << " "; */

    // 3 v.erase()   O(N+K)

    /*   vector<int> v = {1, 2, 3, 4, 5};
      // v.erase(v.begin() + 2); // single value delete
      v.erase(v.begin() + 2, v.end() - 1);
      for (int n : v)
          cout << n << " "; */
    // 4 replace(v.begin(),v.end(),value,replace_value)

    /*  vector<int> v = {1, 3, 4, 2, 3, 4, 5, 7, 3};
     replace(v.begin(), v.end() - 1, 3, 100); // don't replace last 3
     for (int a : v)
         cout << a << " "; */

    // 5 find(v.begin(),v.end(),V)   // not return a value, return  a iterator
    vector<int> v = {1, 3, 4, 2, 3, 4, 5, 7, 3};
    /*  vector<int>::iterator it;
     it = find(v.begin(), v.end(), 5); // 5 paile 5 dibe na paile garbage dibe
     cout << *it << endl; */
    auto it = find(v.begin(), v.end(), 15);
    if (it != v.end())
        cout << "found";
    else
        cout << "not found";

    return 0;
}