#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[11][11];
ll n, m;
ll Max_path(ll i, ll j)
{
    if (i == n && j == m) // Base case
        return ar[i][j];

    if (i > n || j > m)
        return -1e18; // Return a very large negative value(LLONG_MIN) instead of 0

    ll op1 = Max_path(i + 1, j) + ar[i][j];
    ll op2 = Max_path(i, j + 1) + ar[i][j];
    ll ans = max(op1, op2);
    return ans;
}

int main()
{

    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> ar[i][j];
        }
    }

    cout << Max_path(1, 1) << endl;
    return 0;
}