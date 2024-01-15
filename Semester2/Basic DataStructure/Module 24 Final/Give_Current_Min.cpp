#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int v;
            cin >> v;
            pq.push(v);
            cout << pq.top() << endl;
        }
        else if (c == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
                cout << pq.top() << endl;
        }
        else
        //(c == 2)
        {
            if (!pq.empty())
                pq.pop();

            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
                cout << pq.top() << endl;
        }
    }
    return 0;
}