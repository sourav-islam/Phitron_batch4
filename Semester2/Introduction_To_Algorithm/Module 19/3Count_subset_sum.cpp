// 1 Top-down
#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int count_subset_sum(int n, int ar[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return 1;
        else
            return 0;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (ar[n - 1] <= s)
    {
        int op1 = count_subset_sum(n - 1, ar, s - ar[n - 1]);
        int op2 = count_subset_sum(n - 1, ar, s);
        return dp[n][s] = op1 + op2;
    }
    else
        return dp[n][s] = count_subset_sum(n - 1, ar, s);
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
            dp[i][j] = -1;
        }
    }
    cout << count_subset_sum(n, ar, s) << endl;

    // count_subset_sum(n, ar, s);
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= s; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}

// 2 Bottom_up approach
/* #include <bits/stdc++.h>
using namespace std;
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
    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (ar[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - ar[i - 1]] + dp[i - 1][j];
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    // cout << dp[n][s] << endl;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
} */