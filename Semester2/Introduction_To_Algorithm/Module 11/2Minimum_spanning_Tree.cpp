#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int Size[N];

void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}
int find(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find(parent[v]);
}

void Union(int v1, int v2)
{
    int La = find(v1);
    int Lb = find(v2);
    if (La != Lb)
    {
        if (Size[La] > Size[Lb])
        {
            parent[Lb] = La;
            Size[La] += Size[Lb];
        }
        else
        {
            parent[La] = Lb;
            Size[Lb] += Size[La];
        }
    }
}
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
bool cmp(Edge e1, Edge e2)
{
    return e1.w < e2.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        make(i);
    }
    vector<Edge> edge;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edge.push_back(Edge(a, b, w));
    }
    sort(edge.begin(), edge.end(), cmp);
    /* for (Edge e : edge)
    {
        cout << e.a << " " << e.b << " " << e.w << endl;
    } */
    int total_cost = 0;
    for (int i = 0; i < edge.size(); i++)
    {
        int LeaderA = find(edge[i].a);
        int LeaderB = find(edge[i].b);
        if (LeaderA == LeaderB)
            continue;
        Union(edge[i].a, edge[i].b);
        total_cost += edge[i].w;
    }
    cout << total_cost << endl;
    return 0;
}