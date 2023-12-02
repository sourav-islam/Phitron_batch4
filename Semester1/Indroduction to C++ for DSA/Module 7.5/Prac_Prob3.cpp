#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string x;
    cin >> x;
    int ctn = 0;
    while (ss >> word)
    {
        if (word == x)
        {
            ctn++;
        }
    }
    cout << ctn << endl;

    return 0;
}