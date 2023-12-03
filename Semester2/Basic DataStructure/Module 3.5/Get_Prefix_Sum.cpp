#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> pre(v);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    for (auto it = pre.end() - 1; it >= pre.begin(); it--)
    {
        cout << *it << " ";
    }

    return 0;
}