#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<long long> s;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            s.insert(a);
        }
        for (long long val : s)
            cout << val << " ";

        cout << endl;
    }

    return 0;
}