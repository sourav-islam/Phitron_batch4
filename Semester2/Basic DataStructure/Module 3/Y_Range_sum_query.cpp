
// brute force O(n^2)
/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }

    while (q--) // O(10^5)
    {
        int l, r;
        cin >> l >> r;
        l--, r--; // convert to index from
        int sum = 0;
        for (int i = l; i <= r; i++) // O(10^5)
        {
            sum += v[i];
        }
        cout << sum << endl; // O(10^10) = TLE
    }
    return 0;
} */
// efficient O(N)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }
    vector<long long> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    // for (int val : pre)
    //     cout << val << " ";
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        if (l == 0)
        {
            cout << pre[r] << endl;
        }
        else
        {
            cout << pre[r] - pre[l - 1] << endl;
        }
    }
}