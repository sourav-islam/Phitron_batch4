#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> vec[1005];

long long cost[1005];
void dijkstra(int src)
{
    cost[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();
        int p_node = p.second;
        long long p_cost = p.first;
        for (pair<int, int> pa : vec[p_node])
        {
            int c_node = pa.first;
            long long c_cost = pa.second;
            if (p_cost + c_cost < cost[c_node])
            {
                cost[c_node] = p_cost + c_cost;
                pq.push({cost[c_node], c_node});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        vec[a].push_back({b, w});
    }
    int s;
    cin >> s;
    for (int i = 1; i <= n; i++)
    {
        cost[i] = INT_MAX;
    }
    dijkstra(s);
    int t;
    cin >> t;
    while (t--)
    {
        int d, dw;
        cin >> d >> dw;
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            if (i == d && cost[i] <= dw)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}