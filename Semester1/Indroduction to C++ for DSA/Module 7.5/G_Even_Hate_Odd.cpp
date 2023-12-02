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
        int a[n];
        int ev = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                ev++;
            }
        }

        if (n % 2 == 1)
        {
            cout << "-1" << endl;
        }
        else
            cout << abs(n / 2 - ev) << endl;
    }
    return 0;
}

/*  1. calculate even and odd
 2. if(n % 2 != 0) print -1
 3. else if(even == odd ) print 0
 4. else (abs (even - odd)/2)
     */