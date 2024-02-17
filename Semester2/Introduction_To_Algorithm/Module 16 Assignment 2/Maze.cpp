#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
char mat[N][N];
bool vis[N][N];
pair<int, int> parent[N][N];
int n, m;
bool flag;
bool valid(int i, int j)
{
    return (i >= 0 && i < n) && (j >= 0 && j < m) && mat[i][j] != '#';
}
vector<pair<int, int>> vec = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        int pi = p.first;
        int pj = p.second;

        if (pi == di && pj == dj)
        {
            flag = true;
        }
        for (int i = 0; i < 4; i++)
        {
            int ci = pi + vec[i].first;
            int cj = pj + vec[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {vec[i].first, vec[i].second};
            }
        }
    }
}
int main()
{

    cin >> n >> m;
    memset(mat, '0', sizeof(mat));
    memset(vis, false, sizeof(vis));

    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (mat[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    flag = false;
    bfs(si, sj, di, dj);

    if (flag)
    {
        while (di != si || dj != sj) // Using OR, karon 1 ta  steps por ei row number same hoile pare ba column number same hoite pare.
        {
            auto pr = parent[di][dj];
            di -= pr.first;
            dj -= pr.second;
            if (mat[di][dj] == 'R')
            {
                break;
            }
            mat[di][dj] = 'X';
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    else
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    return 0;
}