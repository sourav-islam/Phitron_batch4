#include <bits/stdc++.h>
using namespace std;
int main()
{
    // without vector size
    /*   vector<int> v;
      int x;
      while (cin >> x)
      {
          v.push_back(x);
      }
      vector<int> pre(v.size());
      pre[0] = v[0];
      for (int i = 1; i < v.size(); i++)
      {
          pre[i] = pre[i - 1] + v[i];
      }
      for (int val : pre)
          cout << val << " ";
   */

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    for (int val : pre)
        cout << val << " ";

    return 0;
}