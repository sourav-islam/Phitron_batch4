#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N];
int Size[N];

void make(int v)
{
    parent[v] = v; // v ke nijer parent baniye dilo
    Size[v] = 1;
}

int find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

void Union(int a, int b)
{
    if (find(a) != find(b))
    {
        if (Size[a] < Size[b])
        {
            swap(a, b);
        }
        parent[b] = a;      // choto Size er tree ke boro Size er tree te assign korlam
        Size[a] += Size[b]; // boro er Size er tree er value increase kore fellam.
    }
}

int main()
{
    // component count korbo;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    int cnt = 0;
    // input
    // 4 2
    // 1 2
    // 3 4
    for (int i = 1; i <= n; i++)
    {
        if (i == find(i)) // 1 L-> 1 but 2 L-> 1. So jokhon 1,2,3,4 er Leader kromannoye 1,2,3,4 pabo mane 4 ta component.But here (1L1 and 3L3, so 2 ta component)
                          // 3 L-> 3 but 4 L-> 3
        {
            cnt++; // component count
        }
    }
    cout << cnt << endl;
    return 0;
}