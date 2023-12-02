#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool space = false;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (space)
        {
            cout << " ";
        }
        cout << word;
        space = true;
    }

    /* while (cin >> s)
    {
        cout << s << endl;
    } */

    return 0;
}