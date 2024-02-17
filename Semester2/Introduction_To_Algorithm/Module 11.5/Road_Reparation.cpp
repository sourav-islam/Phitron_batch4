#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int g_size[N];
void dsu_initialize()
{
    memset(par, -1, sizeof(par));
    memset(g_size, 1, sizeof(g_size));
}
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        g_size[i] = 1;
    }
}
int find(int n)
{
    if (par[n] == -1)
        return n;
    return par[n] = find(par[n]);
}
void dsu_union(int a, int b)
{
    int la = find(a);
    int lb = find(b);
    if (la != lb)
    {
        if (g_size[la] > g_size[lb])
        {
            par[lb] = la;
            g_size[la] += g_size[lb];
        }
        else
        {
            par[la] = lb;
            g_size[lb] += g_size[la];
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> vec;
    int i = 0;
    while (i++ < m)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vec.push_back({c, {a, b}});
    }
    sort(vec.begin(), vec.end());
    dsu_initialize();
    long long min_cost = 0;
    int edge = 0;
    for (pair<int, pair<int, int>> p : vec)
    {
        int c = p.first;
        int a = p.second.first;
        int b = p.second.second;
        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA != leaderB)
        {
            dsu_union(a, b);
            min_cost += c;
            edge++;
        }
    }
    // minimum spanning tree hobe jodi edges er number equal to vertices - 1 hoi
    if (edge == n - 1)
        cout << min_cost << endl;
    else
        cout << "IMPOSSIBLE" << endl;
    return 0;
}