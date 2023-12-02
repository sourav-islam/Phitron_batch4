#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'A']++;
        }

        /*  for (int i = 0; i < s.size(); i++)
         {
             cout << s[i] << " " << freq[s[i] - 'A'] << endl;
                 } */

        int ctn = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i] - 'A'] != 0)
            {
                if (freq[s[i] - 'A'] == 1)
                    ctn += 2;
                else
                {
                    ctn = ctn + freq[s[i] - 'A'] + 1;
                }
                freq[s[i] - 'A'] = 0;
            }
        }
        cout << ctn << endl;
    }

    return 0;
}