#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    /* stringstream ss(s);
    string word;

    int count = 0;
    while (ss >> word)   // codeforces error
    {
        count++;
    }
    cout << count; */
    int ctn = 0;
    bool inside_word = false;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
                ctn++;
            inside_word = true;
        }
        else
            inside_word = false;
    }
    cout << ctn;
    return 0;
}