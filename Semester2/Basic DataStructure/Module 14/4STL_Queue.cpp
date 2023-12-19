#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    /* q.push(10);
    q.push(20);
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl; */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    cout << q.size() << endl;
    while (q.empty() == false)
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}