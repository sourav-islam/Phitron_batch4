#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    long long a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
vector<Edge> edgelist;
const long long N = 1e18;
long long cost[1005];
int main()
{
    long long n, e;
    cin >> n >> e;
    while (e--)
    {
        long long a, b, w;
        cin >> a >> b >> w;
        edgelist.push_back(Edge(a, b, w));
    }
    long long s;
    cin >> s;
    for (int i = 1; i <= n; i++)
    {
        cost[i] = N;
    }
    cost[s] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (Edge e : edgelist)
        {
            long long node1 = e.a;
            long long node2 = e.b;
            long long cst = e.w;
            if (cost[node1] < N && cost[node1] + cst < cost[node2])
            {
                cost[node2] = cost[node1] + cst;
            }
        }
    }
    bool cycle = false;
    for (Edge e : edgelist)
    {
        long long node1 = e.a;
        long long node2 = e.b;
        long long cst = e.w;
        if (cost[node1] < N && cost[node1] + cst < cost[node2])
        {
            cycle = true;
        }
    }

    if (cycle)
        cout << "Negative Cycle Detected" << endl;
    else
    {
        long long t;
        cin >> t;
        while (t--)
        {
            long long d;
            cin >> d;
            if (cost[d] < N)
            {
                cout << cost[d] << endl;
            }
            else
                cout << "Not Possible" << endl;
        }
    }
    return 0;
}