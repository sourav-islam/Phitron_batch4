#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &p : a)
        cin >> p;
    int m;
    cin >> m;
    vector<int> b(m);
    for (int &p : b)
        cin >> p;
    int x;
    cin >> x;
    a.insert(a.begin() + x, b.begin(), b.end());
    for (int p : a)
        cout << p << " ";
    return 0;
}