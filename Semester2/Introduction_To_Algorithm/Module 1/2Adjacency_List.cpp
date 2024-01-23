#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> ar[n];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    // 4 index er vector list print
    for (int i = 0; i < ar[4].size(); i++)
    {
        cout << ar[4][i] << " ";
    }

    // all vector list print
    /* for (int i = 0; i < n; i++)
    {
        cout << i << "-";
        for (int j = 0; j < ar[i].size(); j++)
        {
            cout << " " << ar[i][j];
        }
        cout << endl;
    } */

    return 0;
}