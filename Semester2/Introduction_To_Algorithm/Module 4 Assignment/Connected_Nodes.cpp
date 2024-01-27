#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int i;
        cin >> i;
        if (v[i].size() == 0)
            cout << -1;
        else
        {
            sort(v[i].begin(), v[i].end(), greater<int>());
            for (int val : v[i])
                cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}