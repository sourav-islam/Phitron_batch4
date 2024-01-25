#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
vector<int> vec;
void bfs(int src, int L)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        int par = p.first;
        int level = p.second;
        if (level == L)
        {
            vec.push_back(par);
        }
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push({child, level + 1});
                vis[child] = true;
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

    int L;
    cin >> L;
    memset(vis, false, sizeof(vis));
    bfs(0, L);
    sort(vec.begin(), vec.end(), greater<int>());
    for (auto val : vec)
        cout << val << " ";

    return 0;
}