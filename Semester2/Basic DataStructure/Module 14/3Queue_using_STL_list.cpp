#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myQueue q;
    /*   q.push(1);
      q.push(2);
      cout << q.front() << endl;
      q.pop();
      cout << q.front() << endl;
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
    while (q.empty() == false)
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}