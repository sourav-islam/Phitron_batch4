#include <bits/stdc++.h>
using namespace std;
const int N = 21;
char mat[N][N];
int main()
{
    int n;
    cin >> n;

    int k1 = 1, k2 = n - 1, z = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                mat[i][j] = '*';
            if (j == k2)
                mat[j][k2] = '*';
            else if (j <= k1)
                mat[j][k1] = '7';
        }
        k1++, k2--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}