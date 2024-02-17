#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int g_size[N];
void dsu_make(int v)
{
    par[v] = v;
    g_size[v] = 1;
}

int find(int node)
{
    if (par[node] == node)
        return node;
    return par[node] = find(par[node]);
}

void dsu_union_by_size(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (leaderA != leaderB)
    {
        if (g_size[leaderA] > g_size[leaderB])
        {
            par[leaderB] = leaderA;
            g_size[leaderA] += g_size[leaderB];
        }
        else
        {
            par[leaderA] = leaderB;
            g_size[leaderB] += g_size[leaderA];
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= n; i++)
    {
        dsu_make(i);
    }
    int edges = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int la = find(a);
        int lb = find(b);
        if (la == lb)
            edges++;
        else
            dsu_union_by_size(a, b);
    }
    cout << edges;
    return 0;
}