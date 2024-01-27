#include <bits/stdc++.h>
using namespace std;
int mat[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> v = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int n, m;
int cnt = 1;
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
            cnt++;
            dfs({ci, cj});
            // vis[ci][cj] = true;
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
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != -1 && vis[i][j] == false)
            {
                dfs({i, j});
                vec.push_back(cnt);
            }
            cnt = 1;
        }
    }
    if (vec.size() >= 1)
    {
        sort(vec.begin(), vec.end());
        for (int val : vec)
            cout << val << " ";
    }
    else
        cout << 0 << endl;

    return 0;
}