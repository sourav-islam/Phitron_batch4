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
            if (c == '0')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    st.push(c);
                    break;
                }
                else if (st.top() == '0')
                {
                    st.pop();
                }
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
