#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    vector<int> b(n);
    for (int &j : b)
        cin >> j;

    vector<int> c(b);
    for (int i = 0; i < n; i++)
    {
        c.push_back(a[i]);
    }

    for (int &k : c)
        cout << k << " ";

    return 0;
}