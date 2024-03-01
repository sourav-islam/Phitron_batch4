/* #include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
int dp[N];
bool make_it(ll n, ll a)
{
    if (a == n)
        return true;
    if (dp[a] != -1)
        return dp[a];
    if (a < n)
    {
        bool op1 = make_it(n, a + 3);
        bool op2 = make_it(n, a * 2);
        return dp[a] = op1 || op2;
    }
    else
        return dp[a] = false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        if (make_it(n, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
} */

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
int dp[N];
bool make_it(ll n, ll a)
{
    if (dp[a] != -1)
        return dp[a];
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        if (make_it(n, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}