#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
vector<int> adj[N];
bool vis[N];
int parentArray[N];
bool ans;
void dfs(int src)
{
    vis[src] = true;
    int parent = src;
    for (int child : adj[parent])
    {
        if (vis[child] == true && child != parentArray[parent])
        {
            ans = true;
        }
        if (!vis[child])
        {
            parentArray[child] = parent;
            dfs(child);
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    if (ans)
        cout << "Cycle detected" << endl;
    else
        cout << "Cycle not detected" << endl;
    return 0;
}