/* #include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int path[N];
int bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int ch : adj[par])
        {
            if (!vis[ch])
            {
                vis[ch] = true;
                q.push(ch);
                path[ch] = par;
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int x, y, k;
    cin >> x >> y >> k;
    memset(vis, false, sizeof(vis));
    memset(path, -1, sizeof(path));
    bfs(x);
    int des = y;
    int ctn = 0;
    while (des != -1)
    {
        ctn++;
        des = path[des];
    }
    int steps = ctn - 1; // cause first des ta badd dite hobe.
    // cout << steps << endl;
    if (steps > 0 && steps % 2 == 0)
    {
        if (steps / 2 <= k)
            cout << "YES";
        else
            cout << "NO";
    }

    else
    {
        if (steps > 0 && (steps + 1) / 2 <= k)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
} */
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int dis[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dis[s] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
                dis[child] = dis[par] + 1;
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
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int src, d, k;
    cin >> src >> d >> k;
    bfs(src);
    if (dis[d] != -1 && dis[d] <= k * 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}