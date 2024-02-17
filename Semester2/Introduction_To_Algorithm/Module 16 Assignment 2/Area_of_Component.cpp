#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
char mat[N][N];
bool vis[N][N];
int n, m;

bool valid(int i, int j)
{
    return (i >= 0 && i < n) && (j >= 0 && j < m) && mat[i][j] != '-';
}
vector<pair<int, int>> vec = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    int ctn = 1;
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        int pi = p.first;
        int pj = p.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = pi + vec[i].first;
            int cj = pj + vec[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                ctn++;
            }
        }
    }
    return ctn;
}
int main()
{

    cin >> n >> m;
    memset(mat, '0', sizeof(mat));
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((mat[i][j] == '.') && (!vis[i][j]))
            {
                v.push_back(bfs(i, j));
            }
        }
    }
    sort(v.begin(), v.end());
    if (v.size() == 0)
        cout << -1;
    else
        cout << v[0];

    return 0;
}