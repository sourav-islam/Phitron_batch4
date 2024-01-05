#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        /* string news;
        int j= 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != s[i+1] || s[i] != 1)
            {
                news[j] = s[i];
                j++;
            }

        }
        int cnt;
        for(char c: s)
        {
            if(c == '0')
             cnt++;
        } */
        stack<char> st;
        for (char c : s)
        {
            if (!st.empty())
            {
                if (c == '0')
                {
                    st.push(c);
                }
                else if (c == '1' && st.top() == '1')
                {
                    st.pop();
                }
                else
                    st.push(c);
            }
            else
                st.push(c);
        }
        /*  while (!st.empty())
         {
             cout << st.top();
             st.pop();
         }
         cout << endl; */
    }
    return 0;
}