#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int Size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        Size[i] = 1;
    }
}

int find(int v)
{
    if (parent[v] == -1)
        return v;
    int leader = find(parent[v]);
    return parent[v] = leader;
}

void Union(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (leaderA != leaderB)
    {
        if (Size[leaderA] > Size[leaderB])
        {
            parent[leaderB] = leaderA;
            Size[leaderA] += Size[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            Size[leaderB] += Size[leaderA];
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    bool cycle = false;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        int LeaderA = find(a);
        int leaderB = find(b);
        if (LeaderA == leaderB)
            cycle = true;
        else
            Union(a, b);
    }
    if (cycle)
        cout << "Cycle Dectected" << endl;
    else
        cout << "No cycle" << endl;
    return 0;
}

// i/p:
// 6 6
// 0 1
// 0 4
// 0 2
// 2 3
// 2 5
// 5 3
