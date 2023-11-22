#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());

    cout << s << endl;
    /*  for (string ::iterator it = s.begin(); it < s.end(); it++)
     {
         cout << *it;
     } */
    return 0;
}