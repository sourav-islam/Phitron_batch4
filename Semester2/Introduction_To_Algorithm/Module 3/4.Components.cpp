#include <bits/stdc++.h>
using namespace std;
vector<int> v[20];
bool vis[20];
void dfs(int src)
{
    cout << src << " ";
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
            dfs(child);
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
    memset(vis, false, sizeof(vis));
    int ctn = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            ctn++;
        }
    }
    cout << endl;
    cout << "Number of Components: " << ctn << endl;
    return 0;
}