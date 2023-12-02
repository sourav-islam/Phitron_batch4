#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1
    /*  vector<int> v;
     cout << v.size() << endl; // size 0 . can't print v[0]. TLE */
    // 2
    /* vector<int> v(5);         // vector<int>v(5, 10) -> 10 10 10 10 10
    cout << v.size() << endl; // 5
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // 0 0 0 0 0
    }
 */
    // 3 vector in vector
    /*  vector<int> v(5, 10);
     vector<int> v1(v);
     for (int x : v1)
         cout << x << " "; */

    // 4 array in vector
    int a[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v(a, a + 6);
    for (int x : v)
        cout << x << " ";

    // vector input output with range based for loop
    /* vector<int> v2(5);
       for (int &x : v2)
           cin >> x;

       for (int x : v2)
           cout << x << " "; */
    return 0;
}