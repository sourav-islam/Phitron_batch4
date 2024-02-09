#include <bits/stdc++.h>
using namespace std;
int dis[101][101];
int vis[101][101];
int n, m;
vector<pair<int, int>> v = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
bool valid(int i, int j)
{
    return !vis[i][j] && i >= 0 && i < n && j >= 0 && j < m;
}
int_fast64_t bfs(pair<int, int> src, pair<int, int> des)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    dis[src.first][src.second] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int pi = par.first;
        int pj = par.second;
        if (pi == des.first && pj == des.second)
        {
            return dis[pi][pj];
        }
        for (pair<int, int> pa : v)
        {
            int ci = pa.first + pi;
            int cj = pa.second + pj;
            if (valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pi][pj] + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        pair<int, int> p, q;
        cin >> n >> m;
        memset(dis, 0, sizeof(dis));
        memset(vis, 0, sizeof(vis));
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;
        p = {ki, kj};
        q = {qi, qj};
        int ans = bfs(p, q);
        cout << ans << endl;
    }
    return 0;
}