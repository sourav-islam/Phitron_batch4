#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool vis[20][20];
int dis[20][20];
int n, m;
bool valid(int i, int j) // i = row, j = column
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        cout << p.first << " " << p.second << endl;
        for (int i = 0; i < v.size(); i++)
        {
            int ci = p.first + v[i].first;
            int cj = p.second + v[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[p.first][p.second] + 1;
            }
        }
    }
}
int main()
{

    cin >> n >> m;
    char grid[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    cout << "Distance: " << dis[2][3];
    return 0;
}