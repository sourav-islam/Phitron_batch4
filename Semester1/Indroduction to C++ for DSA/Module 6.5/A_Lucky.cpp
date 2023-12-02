#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /*  string s;
         cin >> s;

         if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
             cout << "YES" << endl;
         else
             cout << "NO" << endl; */

        string s;
        cin >> s;

        int f_three = 0;
        int l_three = 0;

        for (int i = 0; i < 3; ++i)
        {
            f_three += s[i] - '0';
        }

        for (int i = 3; i < 6; ++i)
        {
            l_three += s[i] - '0';
        }

        cout << (f_three == l_three ? "YES" : "NO") << endl;
    }

    return 0;
}
