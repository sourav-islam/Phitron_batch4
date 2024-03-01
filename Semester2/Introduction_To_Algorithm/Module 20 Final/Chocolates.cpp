/* #include <bits/stdc++.h>
using namespace std;

bool dp[1005][1005];

bool check(int n, int ar[], int sum)
{
    if (n == 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }
    if (dp[n][sum] != false)
        return dp[n][sum];
    if (ar[n - 1] <= sum)
    {
        bool op1 = check(n - 1, ar, sum - ar[n - 1]);
        bool op2 = check(n - 1, ar, sum);
        return dp[n][sum] = op1 || op2;
    }
    else
        return dp[n][sum] = check(n - 1, ar, sum);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        long long s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            s += ar[i];
        }
        int sum = s / 2;
        for (int i = 0; i < 1005; i++)
        {
            for (int j = 0; j < 2005; j++)
            {
                dp[i][j] = false;
            }
        }

        if (sum <= 2000 && s % 2 == 0)
        {
            if (check(n, ar, sum))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            s += ar[i];
        }
        int sum = s / 2;
        if (sum <= 2000 && s % 2 == 0)
        {

            bool dp[n + 1][sum + 1];
            dp[0][0] = true;
            for (int i = 1; i <= sum; i++)
            {
                dp[0][i] = false;
            }

            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= sum; j++)
                {
                    if (ar[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - ar[i - 1]] || dp[i - 1][j];
                    }
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }
            if (dp[n][sum])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        else
            cout << "NO" << endl;
    }
    return 0;
}