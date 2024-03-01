#include <bits/stdc++.h>
using namespace std;
const int maxN = 25;
const int maxW = 105;
int dp[maxN][maxW];
int knapsack(int n, vector<int> weight, vector<int> value, int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n - 1] <= w)
    {
        int op1 = knapsack(n - 1, weight, value, w - weight[n - 1]) + value[n - 1];
        int op2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = max(op1, op2);
    }
    else
    {
        int op2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = op2;
    }
}
int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> weight, value;
    for (int i = 0; i < n; i++)
    {
        int we, va;
        cin >> we >> va;
        weight.push_back(we);
        value.push_back(va);
    }
    memset(dp, -1, sizeof(dp));
    cout << knapsack(n, weight, value, w);

    return 0;
}