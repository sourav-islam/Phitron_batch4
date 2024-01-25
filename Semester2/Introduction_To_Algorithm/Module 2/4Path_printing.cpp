#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int vis[1005]; // global variables a array nila , sob elements 0 dia initialize thake
int parent[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        // cout << par << endl;
        for (int i = 0; i < v[par].size(); i++)
        {
            int child = v[par][i];
            if (vis[child] == 0)
            {
                q.push(child);
                vis[child] = 1;
                parent[child] = par;
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
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(parent, -1, sizeof(parent));
    bfs(src);
    int des;
    cin >> des;
    int x = des;
    vector<int> vec;
    while (x != -1)
    {
        vec.push_back(x);
        x = parent[x];
    }

    reverse(vec.begin(), vec.end());

    for (auto val : vec)
    {
        cout << val << " ";
    }
    return 0;
}
