/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<vector<int>, int>> p;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        p.push_back({{a, b}, w});
    }
    long long dis[n];
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto edge : p)
        {
            int node1 = edge.first[0];
            int node2 = edge.first[1];
            int cost = edge.second;

            if (dis[node1] < INT_MAX && (dis[node1] + cost < dis[node2]))
            {
                dis[node2] = dis[node1] + cost;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << dis[i] << endl;
    }
    // Cycle detection after n-1 iterations
    bool cycle = false;
    for (auto edge : p)
    {
        int node1 = edge.first[0];
        int node2 = edge.first[1];
        int cost = edge.second;

        if (dis[node1] < INT_MAX && (dis[node1] + cost < dis[node2]))
        {
            cycle = true;
        }
    }

    if (cycle)
        cout << "cycle detected" << endl;

    return 0;
} */

// input
// 4 4
// 1 3 -3
// 0 3 5
// 2 1 1
// 0 2 -2

// 2nd Approach
#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edgelist;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edgelist.push_back(Edge(a, b, w));
    }
    int dis[n];
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (Edge ed : edgelist)
        {
            int node1 = ed.a;
            int node2 = ed.b;
            int cost = ed.w;

            if (dis[node1] < INT_MAX && dis[node1] + cost < dis[node2])
            {
                dis[node2] = dis[node1] + cost;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "->" << dis[i] << endl;
    }
    bool cycle = false;
    for (Edge ed : edgelist)
    {
        int node1 = ed.a;
        int node2 = ed.b;
        int cost = ed.w;

        if (dis[node1] < INT_MAX && dis[node1] + cost < dis[node2])
        {
            cycle = true;
        }
    }

    if (cycle)
        cout << "Cycle detected" << endl;
    else
        cout << "cycle not detected" << endl;

    return 0;
}