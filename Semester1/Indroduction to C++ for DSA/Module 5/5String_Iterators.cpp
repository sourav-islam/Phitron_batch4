#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    /* for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    } */
    /*
       cout << *s.begin() << endl; // s.begin() points to first index address(string class a private )
       cout << *s.end() << endl;
       cout << *(s.end() - 1) << endl;
    */

    string ::iterator it;
    for (it = s.begin(); it < s.end(); it++) // for (string ::iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}