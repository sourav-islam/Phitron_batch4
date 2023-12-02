/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i + 1; j < v.size(); j++)    // O(n^2) so TLE
        {
            if (v[i] == v[j])
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
} */
// apply O(logN) with binary search
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0;
    int s_idx = i + 1;
    int e_idx = n - 1;
    bool flag = false;
    while (s_idx <= e_idx)
    {
        int mid = (s_idx + e_idx) / 2;
        if (v[i] == v[mid])
        {
            flag = true;
            break;
        }
        else if (v[i] < v[mid])
            e_idx = mid - 1;
        else
            s_idx = mid + 1;
        if (s_idx > e_idx)
            i++;
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}