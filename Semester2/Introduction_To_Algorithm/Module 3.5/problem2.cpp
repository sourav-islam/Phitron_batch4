#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
bool vis[1000];
int ctn;
void dfs(int src)
{
    ctn++;
    vis[src] = true;
    for (int ch : adj[src])
    {
        if (!vis[ch])
            dfs(ch);
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
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        ctn = 0;
        if (!vis[i])
        {
            dfs(i);
            vec.push_back(ctn);
        }
    }
    sort(vec.begin(), vec.end());
    for (int val : vec)
        cout << val << " ";
    return 0;
}