#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s, x;
    for (int k = 0; k < t; k++)
    {

        cin >> s >> x;
        // cout << s << " " << x << endl;

        int idx = s.find(x);
        while (idx != -1)
        {

            s.replace(idx, x.size(), "#");
            idx = s.find(x, idx + 1);
        }

        cout << s << endl;
    }

    return 0;
}