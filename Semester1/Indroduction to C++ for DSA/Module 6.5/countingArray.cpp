#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[12];
    cin >> s;

    int freq[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        if (freq[s[i] - 'a'] != 0)
        {
            cout << s[i] << " - " << freq[s[i] - 'a'] << endl;
            freq[s[i] - 'a'] = 0;
        }
    }

    return 0;
}
