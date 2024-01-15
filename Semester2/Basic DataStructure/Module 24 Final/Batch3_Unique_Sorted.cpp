#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        priority_queue<int> pq;
        for (int i : s)
            pq.push(i);
        while (!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
    }
    return 0;
}