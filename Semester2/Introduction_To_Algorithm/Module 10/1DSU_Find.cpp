#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
    }
    // Union korar por j parent pabo, segulo assign kora holo. karon aita sudhu Find() er file.
    par[0] = 3;
    par[1] = 2;
    par[3] = 1;
}
// naive approach
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    return dsu_find(par[node]);
}

// path compression optimization
int dsu_find_pathC(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find_pathC(par[node]);
    par[node] = leader;
    return leader;
}
int main()
{
    dsu_initialize(4); // 0-3
    cout << dsu_find(0) << endl;
    cout << dsu_find(1) << endl;
    cout << dsu_find(2) << endl;
    cout << dsu_find(3) << endl;

    cout << "After Path compression optimization: O(log(n))" << endl;
    dsu_initialize(4);

    cout << dsu_find_pathC(0) << dsu_find_pathC(1) << dsu_find_pathC(2) << dsu_find_pathC(3) << endl;
    /*  for (int i = 0; i < 4; i++)
     {
         cout << par[i];
     } */
    return 0;
}