#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int mat[N][N];
bool vis[N][N];
pair<int, int> path[N][N];
vector<pair<int, int>> v = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    return (i >= 0 && i < n) && (j >= 0 && j < m);
}

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int si = par.first;
        int sj = par.second;
        // cout << si << " " << sj << endl;
        for (int i = 0; i < v.size(); i++)
        {
            int ci = si + v[i].first;
            int cj = sj + v[i].second;
            while (valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] != -1)
            {
                path[ci][cj] = {v[i].first, v[i].second};
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
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
            else if (s[j] == 'A')
                src = {i, j};
            else if (s[j] == 'B')
                des = {i, j};
            else
                mat[i][j] = 0;
        }
    }
    memset(vis, false, sizeof(vis));
    memset(path, -1, sizeof(path));

    bfs(src);
    if (vis[des.first][des.second])
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
        return 0;
    }
    vector<pair<int, int>> vec;
    while (des.first != src.first || des.second != src.second)
    {
        vec.push_back({path[des.first][des.second]});
        des.first -= vec.back().first;
        des.second -= vec.back().second;
    }

    reverse(vec.begin(), vec.end());
    cout << vec.size() << endl;
    // for (auto pa : vec)
    //     cout << pa.first << " " << pa.second << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i].first == 0 && vec[i].second == -1)
            cout << "L";
        else if (vec[i].first == 1 && vec[i].second == 0)
            cout << "D";
        else if (vec[i].first == 0 && vec[i].second == 1)
            cout << "R";
        else if (vec[i].first == -1 && vec[i].second == 0)
            cout << "U";
    }
    return 0;
}
