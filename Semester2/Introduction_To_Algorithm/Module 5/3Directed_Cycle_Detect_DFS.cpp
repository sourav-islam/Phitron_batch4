#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
vector<int> adj[N];
bool vis[N];
int path[N];
bool ans;
void dfs(int src)
{
    vis[src] = true;
    path[src] = true;
    for (int child : adj[src])
    {
        if (vis[child] == true && path[child] == true)
        {
            ans = true;
        }
        if (!vis[child])
        {
            // path[child] = true;
            dfs(child);
        }
    }
    path[src] = false;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(path, false, sizeof(path));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (ans)
        cout << "Cycle detected" << endl;
    else
        cout << "Cycle not detected" << endl;
    return 0;
}