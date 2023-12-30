// approach 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int cnt1[26] = {0};
        int cnt2[26] = {0};

        for (char ch : s1)
        {
            cnt1[ch - 'a']++;
        }

        for (char ch : s2)
        {
            cnt2[ch - 'a']++;
        }

        bool pile = true;
        for (int i = 0; i < 26; ++i)
        {
            if (cnt1[i] != cnt2[i])
            {
                pile = false;
                break;
            }
        }

                if (pile)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
} */