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
    int size()
    {
        return v.size();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
    // all above functions having time complexity O(1)
};
int main()
{
    myStack st;
    /*  st.push(10);
     st.push(20);

     cout << st.top() << endl;
     st.pop();
     cout << st.top() << endl;
     st.pop(); // already empty, garbage or segmentation . so if(empty() == false) / if(!empty())
     cout << st.top() << endl;
     if (st.empty() == false)
         cout << st.top() << endl; */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}