#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            v.push_back({ar[i], i});
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());
        if (v[0].second < v[1].second)
        {
            cout << v[0].second << " " << v[1].second << endl;
        }
        else
            cout << v[1].second << " " << v[0].second << endl;
    }
    return 0;
}