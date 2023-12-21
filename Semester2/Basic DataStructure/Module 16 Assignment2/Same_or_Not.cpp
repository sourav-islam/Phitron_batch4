#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    queue<int> b;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        b.push(y);
    }
    bool same = true;

    if (a.size() != b.size())
    {
        cout << "NO";
    }
    else
    {
        while (!a.empty() && !b.empty())
        {
            if (a.top() != b.front())
            {
                same = false;
                break;
            }
            a.pop();
            b.pop();
        }
        if (same)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}