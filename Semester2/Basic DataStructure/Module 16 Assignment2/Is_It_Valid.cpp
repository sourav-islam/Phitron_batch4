#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else if (c == st.top())
            {
                st.push(c);
            }
            else
            {
                st.pop();
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}