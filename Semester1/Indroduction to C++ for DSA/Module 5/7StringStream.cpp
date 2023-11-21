#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s); // constructor a string parameter nia. but i can { stringstream ss; ss << s;}
                        /*  stringstream ss;
                         ss << s; */
    string word;

    /*  ss >> word;
     cout << word << endl;
     // word << ss; // can't
     ss >> word;
     cout << word << endl;
  */
    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}