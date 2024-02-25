#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
ll dp[N];
ll ctn = 0;
ll fibonacci(ll n)
{
    if (n == 0 || n == 1)
    {
        ctn++;
        return n;
    }
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    dp[1] = 1;
    cout << fibonacci(n) << endl; // n tmo fibo number

    for (ll i = 0; i <= n; i++)
        cout << dp[i] << " ";

    cout << endl
         << ctn; // n = 6 er jonno DP use kore base case dhukce 3 ber, dp chara 13 ber.
    return 0;
}