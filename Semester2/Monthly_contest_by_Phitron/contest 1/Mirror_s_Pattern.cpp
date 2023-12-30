#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j;
            }
        }
        else if (i >= 2 && i < n)
        {
            cout << i;
            for (int j = 1; j < n - 1; j++)
            {
                cout << " ";
            }
            cout << n - i + 1;
        }
        else
        {
            for (int j = n; j > 0; j--)
            {
                cout << j;
            }
        }
        cout << endl;
    }
    return 0;
}