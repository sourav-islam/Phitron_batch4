#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.second < b.second)
            return true;
        else if (a.second > b.second)
            return false;
        else
            return a.first < b.first;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        while (n > 0)
        {
            int x;
            cin >> x;
            mp[x]++;
            pq.push({x, mp[x]});
            n--;
        }
        /*  pair<int, int> topElement = pq.top();
         cout << topElement.first << " " << topElement.second << endl; */

        cout << pq.top().first << " " << pq.top().second << endl;
    }
    return 0;
}