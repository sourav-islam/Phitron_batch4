#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
ll dis[N];
ll parent[N];
vector<pair<ll, ll>> adj[N];
void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> p = pq.top();
        pq.pop();
        ll cost = p.first;
        ll node = p.second;
        for (auto pair : adj[node])
        {
            ll ch_node = pair.first;
            ll ch_cost = pair.second;
            if (cost + ch_cost < dis[ch_node])
            {
                dis[ch_node] = cost + ch_cost;
                pq.push({dis[ch_node], ch_node});
                parent[ch_node] = node;
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }
    for (ll i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    memset(parent, -1, sizeof(parent));
    dijkstra(1);
    if (parent[n] == -1)
        cout << -1;
    else
    {
        int x = n;
        vector<ll> ve;
        while (x != -1)
        {
            ve.push_back(x);

            x = parent[x];
        }
        reverse(ve.begin(), ve.end());
        for (ll x : ve)
            cout << x << " ";
    }

    return 0;
}