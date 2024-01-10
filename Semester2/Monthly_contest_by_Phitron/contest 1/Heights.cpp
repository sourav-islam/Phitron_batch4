/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int max_height = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] > max_height)
            max_height = ar[i];
    }
    cout << -1 << " " << max_height << endl;
    for (int i = 1; i < n - 1; i++)
    {
        int b_max = 0;
        int a_max = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a_max < ar[j])
                a_max = ar[j];
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (ar[j] > b_max)
                b_max = ar[j];
        }
        cout << b_max << " " << a_max << endl;
    }
    cout << max_height << " " << -1;
    return 0;
} */
// Time Limit exceeded O(n2) time

// 2 O(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int maxLeft[n], maxRight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxLeft[i] = -1;
        maxRight[i] = -1;
    }

    int x = -1, y = -1;
    for (int i = 0; i < n; i++)
    {
        maxLeft[i] = max(maxLeft[i], x);
        x = max(x, a[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        maxRight[i] = max(maxRight[i], y);
        y = max(y, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << maxLeft[i] << " " << maxRight[i] << endl;
    }
    return 0;
}