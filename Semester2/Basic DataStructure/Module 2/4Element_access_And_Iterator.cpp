#include <bits/stdc++.h>
using namespace std;
int main()
{ // 1 Access Elements
    /* vector<int> v = {1, 2, 3, 4, 5};
     cout << v[v.size() - 1] << endl;
    cout << v.back() << endl;
    cout << v[0] << endl;
    cout << v.front() << endl; */
    // 2 Iterator
    vector<int> v = {1, 2, 3, 4, 5, 9};
    /*  vector<int>::iterator it;
     for (it = v.begin(); it < v.end(); it++)
     {
         cout << *it << " ";
     }
    */
    for (auto it = v.begin(); it < v.end(); it++)
        cout << *it << " ";
    return 0;
}