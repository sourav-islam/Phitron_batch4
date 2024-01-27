#include <bits/stdc++.h>
using namespace std;
int n, m;
int mat[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> v = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return !vis[i][j] && mat[i][j] != -1 && i >= 0 && i < n && j >= 0 && j < m;
}
void bfs(pair<int, int> src, pair<int, int> des)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    bool connected = false;
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        int a = p.first;
        int b = p.second;
        if (a == des.first && b == des.second)
        {
            connected = true;
        }
        for (int i = 0; i < v.size(); i++)
        {
            int ci = a + v[i].first;
            int cj = b + v[i].second;
            if (valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
    if (connected)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    cin >> n >> m;
    pair<int, int> src, des;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                mat[i][j] = -1;
            if (s[j] == 'A')
                src = {i, j};
            if (s[j] == 'B')
                des = {i, j};
        }
    }
    bfs(src, des);
    return 0;
}