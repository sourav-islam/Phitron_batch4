#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
ll par[N];
ll g_size[N];
void dsu_make(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        par[i] = -1;
        g_size[i] = 1;
    }
}

ll find(ll node)
{
    if (par[node] == -1)
        return node;
    return par[node] = find(par[node]);
}

void dsu_union_by_size(ll a, ll b)
{
    ll leaderA = find(a);
    ll leaderB = find(b);
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
    ll n, e;
    cin >> n >> e;
    dsu_make(n);
    vector<pair<ll, pair<ll, ll>>> vec;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        vec.push_back({w, {a, b}});
    }

    sort(vec.begin(), vec.end());

    ll min_cost = 0;
    ll rem_edges = 0;
    for (auto v : vec)
    {
        ll a = v.second.first;
        ll b = v.second.second;
        ll w = v.first;

        ll la = find(a);
        ll lb = find(b);

        if (la == lb)
        {
            rem_edges++;
        }
        else //(la != lb)
        {
            dsu_union_by_size(a, b);
            min_cost += w;
        }
    }
    ll count_ldr = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (par[i] == -1)
        {
            count_ldr++;
        }
    }
    if (count_ldr == 1)
    {
        cout << rem_edges << " ";
        cout << min_cost;
    }
    else
        cout << "Not Possible";

    return 0;
}