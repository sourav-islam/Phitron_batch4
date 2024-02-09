#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<int> ar[N];
bool visited[N];
int bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    int ctn = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        ctn++;

        for (int i = 0; i < ar[par].size(); i++)
        {
            int child = ar[par][i];
            if (!visited[child])
            {
                visited[child] = true;
                q.push(child);
            }
        }
    }
    return ctn;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }

    int x;
    cin >> x;
    int nodes = bfs(x);
    cout << nodes << endl;
    return 0;
}