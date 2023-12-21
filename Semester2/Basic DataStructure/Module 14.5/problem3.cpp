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
    stack<int> st1;
    // st1 = st; // same order a copy hobe
    while (!st.empty())
    {
        st1.push(st.top()); // reverse order a copy hobe
        st.pop();
    }

    while (st1.empty() == false)
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    return 0;
}