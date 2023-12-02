#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    while (q--) // O(N)
    {
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < n; i++) // O(N)
        {
            if (x == ar[i])
                flag = true;
        }
        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    // O(N^2) = 10^5 * 10^5 = 10^10 (TLE)
    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // In binary search array must be sorted
    sort(ar, ar + n);
    while (q--)
    {
        int x;
        cin >> x;
        int start_idx = 0;
        int end_idx = n - 1;
        int flag = 0;
        while (start_idx <= end_idx)
        {
            // int mid = start_idx + (end_idx - start_idx) / 2;
            int mid = (start_idx + end_idx) / 2;

            if (ar[mid] == x)
            {
                flag = 1;
                break;
            }
            else
            {
                if (x > ar[mid])
                {
                    start_idx = mid + 1;
                }
                else if (x < ar[mid])
                {
                    end_idx = mid - 1;
                }
            }
        }
        if (flag == 1)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
} */