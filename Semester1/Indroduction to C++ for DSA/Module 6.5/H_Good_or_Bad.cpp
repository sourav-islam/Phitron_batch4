#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        string s;
        cin >> s;
        bool b = false;
        // int flag = 0;
        for (int j = 0; j < s.size() - 2; j++)
        {
            if ((s[j] == '0' && s[j + 1] == '1' && s[j + 2] == '0') || (s[j] == '1' && s[j + 1] == '0' && s[j + 2] == '1'))

            {
                // flag = 1;
                b = true;
                break;
            }
        }
        if (b)
        {
            cout << "Good" << endl;
        }
        else
            cout << "Bad" << endl;
    }

    return 0;
}