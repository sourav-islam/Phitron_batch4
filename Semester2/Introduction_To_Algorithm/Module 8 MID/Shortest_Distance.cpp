#include <bits/stdc++.h>
using namespace std;
const long long N = 1e18;
int main()
{
    // input section
    int n, e;
    cin >> n >> e;
    long long mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = N;

            if (i == j)
                mat[i][j] = 0;
        }
    }

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        if (w < mat[a - 1][b - 1])
            mat[a - 1][b - 1] = w;
    }

    // Algorithm

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][k] + mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }

    // print matrix after algorithm
    /*   cout << "After Applying Algorithm:" << endl;
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < n; j++)
          {
              if (mat[i][j] == N)
                  cout << "INF"
                       << " ";
              else
                  cout << mat[i][j] << " ";
          }
          cout << endl;
      } */

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (mat[x - 1][y - 1] == N)
            cout << -1 << endl;
        else
            cout << mat[x - 1][y - 1] << endl;
    }
    return 0;
}