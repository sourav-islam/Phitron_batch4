#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1 v.size(), v.max_size(), v.capacity()
    vector<int> v; // size 0
                   // cout << v.max_size() << endl; // 10^6
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(30);
    cout << v.capacity() << endl; // size capacity over  korle capacity double kore increase kore .
    v.push_back(40);
    cout << v.capacity() << " " << v.size() << endl;
    v.push_back(50);
    cout << v.capacity() << " " << v.size() << endl;

    // 2 v.clear(), v.empty()
    /*   vector<char> v(1, 'c');
      // cout << v << endl; // error but v[0] is c;
      cout << v.size() << " " << v[0] << endl;
      v.clear(); // memory clear kore na, shudhu size ta 0 kore.so v[0] print a c asbe.
      cout << v.size() << " " << v[0] << endl;
   */
    // 3 resize()
    /*    vector<int> v;
       v.push_back(10);
       v.push_back(20);
       v.push_back(30);
       v.push_back(40);
       v.push_back(50);
       cout << v.size() << endl;
       for (int x : v)
           cout << x << " ";
       cout << endl;
       v.resize(2);
       for (int x : v)
           cout << x << " ";
       cout << endl;
       v.resize(7);
       for (int x : v)
           cout << x << " ";
       cout << endl;
       v.resize(8, 100);
       for (int x : v)
           cout << x << " "; */
    return 0;
}