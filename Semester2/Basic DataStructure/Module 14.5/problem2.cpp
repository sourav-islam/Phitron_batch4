#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    queue<int> q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    bool same = true;
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            same = false;
            break;
        }
        st.pop();
        q.pop();
    }
    if (same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}