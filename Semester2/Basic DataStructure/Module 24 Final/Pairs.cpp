#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(pair<string, int> p1, pair<string, int> p2)
    {
        if (p1.first > p2.first)
            return true;
        else if (p1.first == p2.first)
            return p1.second < p2.second;
        else
            return false;
    }
};
int main()
{
    int n;
    cin >> n;

    string s;
    int a;
    // pair<string, int> p;
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;
    while (n--)
    {
        cin >> s >> a;
        // p.first = s;
        // p.second = a;
        pq.push({s, a});
    }

    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}