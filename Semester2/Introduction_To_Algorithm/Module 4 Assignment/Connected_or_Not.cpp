#include <bits/stdc++.h>
using namespace std;
// const int N = 1e3 + 5;
// const int E = 1e6 + 5;

int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c, d;
        cin >> c >> d;
        if (c == d)
            cout << "YES" << endl;
        else if (mat[c][d] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}