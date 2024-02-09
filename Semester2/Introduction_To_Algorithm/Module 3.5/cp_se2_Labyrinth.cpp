#include <bits/stdc++.h>
using namespace std;
const int N = 20;
int maze[N][N]; // global array initially all 0
int vis[N][N];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int n, m;
bool valid(int i, int j)
{
    return !vis[i][j] && maze[i][j] != -1 && i >= 0 && i < n && j >= 0 && j < m;
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;

    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = p.first + dx[i];
            int cj = p.second + dy[i];
            if (valid(ci, cj))
            {
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
                maze[i][j] = -1;
            if (s[j] == 'A')
                src = {i, j};
            if (s[j] == 'B')
                des = {i, j};
        }
    }
    // memset(vis, false, sizeof(vis));
    bfs(src);

    if (vis[des.first][des.second] == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

// input
// 5 8
// ########
// #.A#...#
// #.##.#B#
// #......#
// ########