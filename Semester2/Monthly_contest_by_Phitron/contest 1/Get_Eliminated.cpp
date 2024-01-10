
// 1. Using Stack

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        stack<char> st;
        st.push(s[0]);

        for (int i = 1; i < s.size(); i++)
        {
            if (!st.empty())
            {
                if (st.top() == '1' && s[i] == '1')
                {
                    st.pop();
                }
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        int curr_zero = 0, mx_zero = 0;
         while (!st.empty())
         {
             if (st.top() == '0')
             {
                 curr_zero++;
             }
             else
             {
                 mx_zero = max(mx_zero, curr_zero);
                 curr_zero = 0;
             }
             st.pop();
         }
         cout << max(mx_zero, curr_zero);
        // while (!st.empty())
        // {
        //     cout << st.top();
        //     st.pop();
        // }
        cout << endl;
    }
    return 0;
} */

// 2 Using String
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

        string news;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                i++;
            }
            else
                news.push_back(s[i]);
        }

        int curr_zero = 0, mx_zero = 0;
        for (int i = 0; i < news.size(); i++)
        {
            if (news[i] == '0')
            {
                curr_zero++;
            }
            else
            { // news[i] == '1'

                mx_zero = max(mx_zero, curr_zero);
                curr_zero = 0;
            }
        }
        cout << max(mx_zero, curr_zero) << endl;
    }
    return 0;
}