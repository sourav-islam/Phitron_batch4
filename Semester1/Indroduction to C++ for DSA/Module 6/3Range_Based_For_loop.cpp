#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    /* for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
      */
    // shortcut for loop: can access the value but not index
    for (char c : s)
    {
        cout << c << endl;
    }
    return 0;
}