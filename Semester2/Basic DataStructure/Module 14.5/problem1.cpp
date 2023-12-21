#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    myStack st1;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        st1.push(y);
    }
    // same or not
    if (st.size() != st1.size())
        cout << "NO" << endl;
    else
    {
        bool same = true;
        while (!st.empty())
        {
            if (st.top() != st1.top())
            {
                same = false;
                break;
            }
            st.pop();
            st1.pop();
        }
        if (same)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

// Using STL stack
/* #include <bits/stdc++.h>
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
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        st1.push(y);
    }

    if (st == st1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
} */