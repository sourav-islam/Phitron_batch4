#include <bits/stdc++.h>
using namespace std;
int mat[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> v = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    return !vis[i][j] && mat[i][j] != -1 && i >= 0 && i < n && j >= 0 && j < m;
}
void dfs(pair<int, int> src)
{
    vis[src.first][src.second] = true;
    for (int i = 0; i < v.size(); i++)
    {
        int ci = src.first + v[i].first;
        int cj = src.second + v[i].second;
        if (valid(ci, cj))
        {
            dfs({ci, cj});
            vis[ci][cj] = true;
        }
    }
}
int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                mat[i][j] = -1;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != -1 && vis[i][j] == false)
            {
                dfs({i, j});
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}