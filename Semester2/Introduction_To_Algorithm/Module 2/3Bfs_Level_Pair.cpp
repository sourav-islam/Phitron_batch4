#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int vis[1005]; // global variables a array nila , sob elements 0 dia initialize thake

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        int par = p.first;
        int level = p.second;
        // cout << par << endl;

        if (par == des)
        {
            cout << "Level of " << des << " is " << level << endl;
        }
        for (int i = 0; i < v[par].size(); i++)
        {
            int child = v[par][i];
            if (vis[child] == 0)
            {
                q.push({child, level + 1});
                vis[child] = 1;
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
    int src, des;
    cin >> src >> des;

    bfs(src, des);

    return 0;
}