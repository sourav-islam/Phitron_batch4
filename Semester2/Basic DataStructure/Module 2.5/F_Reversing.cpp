#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    // sort(v.begin(), v.end()); // O(nlogn) aita O(n) theke bad

    for (auto it = v.end() - 1; it >= v.begin(); it--)
    {
        cout << *it << " ";
    }
    return 0;
}