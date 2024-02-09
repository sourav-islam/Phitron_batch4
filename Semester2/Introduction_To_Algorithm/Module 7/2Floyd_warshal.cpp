// input
//  4 6
//  3 2 8
//  3 0 20
//  2 1 5
//  1 0 2
//  0 1 3
//  1 2 2

#include <bits/stdc++.h>
using namespace std;
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
            mat[i][j] = INT_MAX;

            if (i == j)
                mat[i][j] = 0;
        }
    }

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        mat[a][b] = w;
    }
    // print before applying algo

    cout << "Before: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == INT_MAX)
                cout << "INF"
                     << " ";
            else
                cout << mat[i][j] << " ";
        }
        cout << endl;
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
    cout << "After Applying Algorithm:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == INT_MAX)
                cout << "INF"
                     << " ";
            else
                cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}