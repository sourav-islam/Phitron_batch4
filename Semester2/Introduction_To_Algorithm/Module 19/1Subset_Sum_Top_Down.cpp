#include <bits/stdc++.h>
using namespace std;
bool dp[1005][1005];
bool subset_sum(int n, int ar[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return true;
        else
            return false;
    }
    if (dp[n][s] != false)
        return dp[n][s];
    if (ar[n - 1] <= s)
    {
        bool op1 = subset_sum(n - 1, ar, s - ar[n - 1]);
        bool op2 = subset_sum(n - 1, ar, s);
        return dp[n][s] = op1 || op2;
    }
    else
    {
        bool op2 = subset_sum(n - 1, ar, s);
        return dp[n][s] = op2;
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int s;
    cin >> s;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = false;
        }
    }
    if (subset_sum(n, ar, s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    /*  subset_sum(n, ar, s);
     for (int i = 0; i <= n; i++)
     {
         for (int j = 0; j <= s; j++)
         {
             if (dp[i][j])
                 cout << "T ";
             else
                 cout << "F ";
         }
         cout << endl;
     } */
    return 0;
}