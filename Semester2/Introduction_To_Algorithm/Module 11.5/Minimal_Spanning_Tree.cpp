#include <bits/stdc++.h>
using namespace std;
const int N = 20005;
int parent[N];
int Size[N];

void make(int v)
{
    for (int i = 0; i < v; i++)
    {
        parent[i] = i;
        Size[i] = 1;
    }
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
int main()
{
    int n, m;
    cin >> n >> m;
    make(n);
    vector<pair<int, pair<int, int>>> vec;

    while (m--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        vec.push_back({w, {a, b}});
    }
    sort(vec.begin(), vec.end());
    int cost = 0;

    for (auto v : vec)
    {
        int w = v.first;
        int a = v.second.first;
        int b = v.second.second;
        int la = find(a);
        int lb = find(b);
        if (la == lb)
            continue;

        Union(a, b);
        cost += w;
    }

    cout << cost << endl;
    return 0;
}