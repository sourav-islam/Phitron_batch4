/* // 1.Naive implementation of Union
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];

// initialize
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
    }
    par[2] = 1;
    par[1] = 3;
    par[6] = 4;
    par[4] = 5;
}
// find function
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
// Naive implementation of Union
void dsu_union(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    par[leaderA] = leaderB; // par[leaderB] = leaderA;
}

int main()
{
    dsu_initialize(7);
    cout << dsu_find(2) << " " << dsu_find(6) << endl;
    dsu_union(2, 6); // dsu_union er por 2,6 leader ek hoye jabe
    cout << dsu_find(2) << " " << dsu_find(6) << endl;
    cout << dsu_find(1) << " " << dsu_find(4) << endl;
    return 0;
} */

// 2. optimized Union by Size

/* #include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int group_size[N];
// initialize
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}
// find function
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

// optimized Union by size
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA]++;
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB]++;
    }
}
int main()
{
    // dsu_union by size
    dsu_initialize(7);
    dsu_union_by_size(1, 2); //  1-> 2 -> 3 // 1 < 2 so 2 er group_size hobe 2.
    dsu_union_by_size(2, 3); // 2 > 3 karon 2 er group_size 2 and 3 er group_size 1. so Leader 2 for (1->2->3)
    dsu_union_by_size(4, 5); // 4 -> 5 -> 6 // same , so leader 5
    dsu_union_by_size(5, 6);

    cout << dsu_find(1) << " " << dsu_find(2) << " "
         << dsu_find(3) << " " << dsu_find(4) << " "
         << dsu_find(5) << " " << dsu_find(6) << endl;
    // Kintu jodi (1-> 2 -> 3) group er sathe (4 -> 5 -> 6)  group er 2ta element er sathe bonding hoi tahole sober leader 1jon e hobe. jamon
    dsu_union_by_size(1, 4);

    cout << dsu_find(1) << " " << dsu_find(2) << " "
         << dsu_find(3) << " " << dsu_find(4) << " "
         << dsu_find(5) << " " << dsu_find(6) << endl;
    return 0;
} */

// 3. optimized Union by Rank

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int level[N];
// initialize
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        level[i] = 0;
    }
}
// find function
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union_by_rank(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (level[leaderA] > level[leaderB])
    {
        par[leaderB] = leaderA;
    }
    else if (level[leaderB] > level[leaderA])
    {
        par[leaderA] = leaderB;
    }
    else
    {
        par[leaderA] = leaderB; // par[leaderB] = leaderA;
        level[leaderB] += level[leaderA];
    }
}
int main()
{
    // dsu_union by size
    dsu_initialize(7);
    dsu_union_by_rank(1, 2); //  1-> 2 -> 3 // L(1) = L(2) so L(2) = 1+1= 2;
    dsu_union_by_rank(2, 3); // L(2) > L(3)
    dsu_union_by_rank(4, 5); // 4 -> 5 -> 6 // same , so leader 5
    dsu_union_by_rank(5, 6);

    cout << dsu_find(1) << " " << dsu_find(2) << " "
         << dsu_find(3) << " " << dsu_find(4) << " "
         << dsu_find(5) << " " << dsu_find(6) << endl;
    // Kintu jodi (1-> 2 -> 3) group er sathe (4 -> 5 -> 6)  group er 2ta element er sathe bonding hoi tahole sober leader 1jon e hobe. jamon
    dsu_union_by_rank(1, 4);

    cout << dsu_find(1) << " " << dsu_find(2) << " "
         << dsu_find(3) << " " << dsu_find(4) << " "
         << dsu_find(5) << " " << dsu_find(6) << endl;
    return 0;
}
