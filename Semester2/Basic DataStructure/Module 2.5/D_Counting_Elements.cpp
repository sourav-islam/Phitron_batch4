#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ctn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), v[i] + 1);
        // if (*it == v[i] + 1)
        //     ctn++;
        if (it != v.end())
            ctn++;
    }
    cout << ctn;

    return 0;
}