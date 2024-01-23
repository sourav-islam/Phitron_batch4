// Adjacency Matrix tells between two nodes having edge or not.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];

    memset(mat, 0, sizeof(mat)); // 1D/2D matrix initialize with memset() funtion.
                                 // print the matrix to check use of memset() function
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    if (mat[3][4] == 1)
        cout << "Connection ache" << endl;
    else
        cout << "Connection Nai" << endl;

    /*  for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cout << mat[i][j] << " ";
         }
         cout << endl;
     } */
    return 0;
}